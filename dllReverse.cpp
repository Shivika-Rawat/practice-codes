#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"  ";
            temp=temp->next;
        }cout<<endl;
    }
void insertAtStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void insertAtEnd(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return ;

        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
    }
};
void reverseDll(Node* &head,Node* &tail){
    Node* curptr=head;
    while(curptr){
        Node* nextptr=curptr->next;
        curptr->next=curptr->prev;
        curptr->prev=nextptr;
        curptr=nextptr;
    }
    // Swapping head and tail pointer.
    Node* newHead=tail;
    tail=head;
    head=newHead;


}

int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(1);
  dll.insertAtEnd(2);
  dll.insertAtEnd(3);
  dll.insertAtEnd(4);
  dll.display();
  reverseDll(dll.head,dll.tail);
  dll.display();

    return 0;
}














