#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

node* findmiddle(node* head)
{
    node* slow = head;
    node* fast = head;
    while(fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void addnode(node* &head, int newdata)
{
    node* newnode = new node(newdata);
    
    if(head == nullptr)
    {
        head = newnode;
        return;
    }
    
    node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    
    temp->next = newnode;
}

int main()
{
    node* head = nullptr;
    
    addnode(head, 1);
    addnode(head, 2);
    addnode(head, 4);
    addnode(head, 5);
    addnode(head, 6);
    addnode(head, 3);

    node* middle = findmiddle(head);
    cout<< middle->data;
    return 0;
}