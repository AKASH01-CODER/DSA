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

node* reverselist(node* head)
{
    node* prev = nullptr;
    node* curr = head;
    node* next = nullptr;
    
    while(curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
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
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    
    temp->next = newnode;
}

void printlist(node* head)
{
    node* temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<< endl;
}


int main()
{
    node* head = nullptr;
    
    addnode(head, 1);
    addnode(head, 2);
    addnode(head, 3);
    // node* reverse = reverselist(head);
    printlist(head);
    return 0;
}