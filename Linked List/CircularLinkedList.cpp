#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
};

class CircularList{
    public:
        Node* head;
        Node* tail;
        CircularList(){
            head=tail=NULL;
        }

        void InsertAtHead(int val){
            Node* newNode=new Node(val);
            if(tail==NULL){
                head=tail=newNode;
                tail->next=head;
            }
            else{
                newNode->next=head;
                head=newNode;
                tail->next=head;
            }
        }

        void InsertAtTail(int val){
            Node* newNode=new Node(val);
            if(tail==NULL){
                head=tail=newNode;
                tail->next=head;
            }
            else{
                newNode->next=head;
                tail->next=newNode;
                tail=newNode->next;
            }
        }

        void DeleteAtHead(){
            if(head==NULL){
                return;
            }
            else if(head==tail){
                delete head;
                head=tail=NULL;
            }
            else{
                Node* temp=head;

                head=head->next;
                tail->next=head;

                temp->next=NULL;
                delete temp;
            }
        }

        void DeleteAtTail(){
            if(head==NULL){
                return;
            }
            else if(head==tail){
                delete head;
                head=tail=NULL;
            }
            else{
                Node* temp=tail;

                Node* prev=head;
                while(prev->next != tail){
                    prev=prev->next;
                }
                tail=prev;
                tail->next=head;
                temp->next=NULL;
                delete temp;
            }
        }

        void print(){
            if(head==NULL){
                return;
            }
            cout << head->data << "->";
            Node* temp=head->next;
            while (temp != head)
            {
                cout << temp->data << "->";
                temp=temp->next;
            }   
            cout << temp->data << "\n";
        }
};


int main()
{
    CircularList cl;
    cl.InsertAtHead(1);
    cl.InsertAtHead(2);
    cl.InsertAtHead(3);
    
    cl.print();

    // cl.InsertAtTail(4);
    // cl.print();

    // cl.DeleteAtHead();
    // cl.DeleteAtHead();
    // // cl.DeleteAtHead();

    cl.DeleteAtTail();
    cl.DeleteAtTail();
    cl.DeleteAtTail();
    cl.print();


    return 0;
}