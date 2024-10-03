//Given the head of a linked list, reverse the notes of the list K at a time and return the modified list.

#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;

    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){//LinkList is empty.
        head=new_node;
        return ;
        }
        Node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};

Node* reverseKthLL(Node* &head,int k){
    Node* prevptr=NULL;
    Node* curptr=head;
   int counter=0;//for Counting first k node.
   while (curptr!=NULL and counter<k)//We are reversing first K nodes
   {
    Node* nextptr=curptr->next;
    curptr->next=prevptr;
    prevptr=curptr;
    curptr=nextptr;
    counter++;
   }
   //Current pointer will give us (K+1)th node.
   if(curptr!=NULL){
    Node* new_head=reverseKthLL(curptr,k);//
    head->next=new_head;
   }
   return prevptr;
 
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    ll.display();
    ll.head=reverseKthLL(ll.head,3);
    ll.display();

    return 0;
}

