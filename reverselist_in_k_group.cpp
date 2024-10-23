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

node* reversekgroup(node* head, int k)
{
    if(!head)
        return nullptr;
        
    node* current = head;
    node* next = nullptr;
    node* prev = nullptr;
    
    int count = 0;
    
    //reverse the linked list for first k elements
    
    while(current != nullptr && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if(next != nullptr)
    {
        head->next = reversekgroup(next, k);
    }
    
    return prev;
}

void addnode(node* &head, int newdata)
{
    node* newnode = new node(newdata);
    if (head == nullptr)
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

void printlist(node* head)
{
    node* temp = head;
    while(temp!= nullptr)
    {
        cout<< temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = nullptr;
    
    addnode(head, 1);
    addnode(head, 2);
    addnode(head, 3);
    addnode(head, 4);
    addnode(head, 5);
    addnode(head, 6);
    addnode(head, 7);
    addnode(head, 8);
    
    int k = 3;
    cout<<"Original list: ";
    printlist(head);
    
    head = reversekgroup(head, k);
    cout<<"reversed list in k group: ";
    printlist(head);
    
    
    return 0;
}