//You are given the head of a singly linguist. The list can be represented as:
/*
L0 -> L1-> --- ->Ln-1->Ln
Reorder the list to be on the following form.
L0 -> Ln->L1->Ln-1->L2->Ln --- 2->...
*/
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

Node* reorderLL(Node* &head){
    //Can cheque if the link list has at least 3 nodes.If the nodes are less than three, then it will print the same linked list
    
    //Finding the middle element
    Node* slow =head;
    Node* fast=head;
    while(fast &&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //Now slow is pointing to the middle element
    //Separate the linked list and reverse second half
    Node* cur=slow->next;
    slow->next=NULL;
    Node* prev=slow;
    while(cur){
        Node* nextPtr=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextPtr;
    }
    //Merging the two halves of the linked list

    Node* ptr1=head;//Linklist first half
    Node* ptr2=prev;//Linked lists second half
    while(ptr1!=ptr2){
        Node* temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;
    }
    return head;
}
int main(){
    LinkedList ll1;
 
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);
    ll1.display();
    ll1.head=reorderLL(ll1.head);
    ll1.display();
   /*
  op: 
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> NULL
1 -> 8 -> 2 -> 7 -> 3 -> 6 -> 4 -> 5 -> NULL
   */

    return 0;
}




















