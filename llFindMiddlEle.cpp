//Find the middle element of the given link list
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
Node* findMiddleElement(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL){//for even or odd link list size
    slow=slow->next;
    fast=fast->next->next;
    }
    return slow;
}//Tc:O(n)

int main(){
    LinkedList ll1;

    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);  
    
    ll1.display();
    Node* middleNode=findMiddleElement(ll1.head);
    cout<<middleNode->val<<endl;
    
 
  

    return 0;
}



















