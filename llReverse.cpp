//Given the head of Singly Linked list reverse the list and return the reversed list
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

Node* reverseLL(Node* &head){
    Node* prevptr=NULL;
    Node* curptr=head;
    // curptr->next=prevptr;
    //Move all three ptrs by one.step ahead.
    while (curptr!=NULL)
    {
        Node* nextptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
        curptr=nextptr;
    }
    //When this loop ends,prevptr Pointing to my last node, which is new head..
    Node* new_head=prevptr;
    return new_head;
    
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
    ll.head=reverseLL(ll.head);
    ll.display();

    return 0;
}
