#include <iostream>
using namespace std;
class Node{
    public:
        Node* next;
        int data;
    Node(int val){
        data=val;
        next=NULL;
    }

};
class Queue{
    Node* head;
    Node* tail;
    public:
        Queue(){
            head=tail=NULL;
        }
    void push(int data){
        Node* newNode=new Node(data);
        if(isEmpty()){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "LL is Empty.\n";
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front(){
        if(isEmpty()){
            cout << "LL is Empty.\n";
            return -1;
        }
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }   
}; 
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    
   return 0;
}