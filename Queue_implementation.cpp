#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        class node{
            public:
                int data;
                node* next;
                
                node(int val)
                {
                    data = val;
                    next = nullptr;
                }
        };
        
        node* front;
        node* rear;
        
    public: 
        Queue(){
            front = rear = nullptr;
        }
        
        bool isempty(){
            return front == nullptr;
        }
        
        void enqueue(int val){
            node* newnode = new node(val);
            
            if(rear == nullptr){
                front = rear = newnode;
            }
            
            else{
                rear->next = newnode;
                rear = newnode;
            }
        }
        
        void dequeue(){
            if(isempty()){
                cout<<"Queue is empty.";
                return;
            }
            
            node* temp = front;
            cout<< "dequeued: " << front->data << endl;
            front = front->next;
            
            if (front == nullptr){
                rear = nullptr;
            }
            delete temp;
        }
        void printqueue(){
            if(isempty())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            
            node* temp = front;
            while(temp!=nullptr)
            {
                cout<< temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main()
{
    Queue q;
    
    q.enqueue(10);
    q.enqueue(12);
    q.dequeue();
    q.dequeue();
    q.printqueue();
    return 0;
}