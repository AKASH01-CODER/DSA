#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(int element){
            data = element;
            next = nullptr;
        }
};

class Stack{
    private:
        node* top;
    public:    
        Stack(){
            top = nullptr;
        }
        
        void push(int element)
        {
            node* newnode = new node(element);
            newnode->next = top;
            top = newnode;
            cout<< element <<" Pushed in stack."<<endl;
        }
        
        bool isempty()
        {
            if(top == nullptr)
            {
                return true;
            }
            
            else{
                return false;
            }
        }
        
        void pop()
        {
            if(isempty()){
                cout<<"stack is empty"<<endl;
                return;
            }
            else
            {
                node* temp = top;
                top = top->next;
                cout<<temp->data<<" Popped out of stack"<<endl;
                delete temp;
            }
        }
        
        void peek()
        {
            if(isempty())
            {
                cout<<"stack is empty."<<endl;
            }
            else{
                cout<<"Top element is "<<top->data<<endl;
            }
        }
        
        ~Stack(){
            while(!isempty()){
                pop();
            }
            cout<<"stack deleted";
        }
};

int main()
{
    Stack s1;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    
    s1.peek();
    s1.pop();
    cout<<s1.isempty()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.isempty()<<endl;

    return 0;
}