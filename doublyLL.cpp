/*
Advantages of doubly link list over a single link list:
Traversal both ways
Insertion and deletion become more efficient.
Disadvantages of doubly linked list:
Extra space for previous node pointer.
*/
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
};

int main(){
// Node* new_node=new Node(3);
//     DoublyLinkedList dll;
//     dll.head=new_node;
//     dll.tail=new_node;
//     cout<<dll.head->val<<endl;
  //This is for without insertion function

  DoublyLinkedList dll;
  dll.insertAtStart(1);
  dll.insertAtStart(2);
  dll.insertAtStart(3);
  dll.display();

    return 0;
}