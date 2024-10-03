//Given head, the head of an English determine if the linked list is palindrome or not..
/*
1.Find middle element using slow and fast pointer.
2.Break link list or separate link list..
3.Reverse second half of linked list.
4.Compare the second part of linked list.

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

bool isPaindrome(Node* head){
    //Find middle element
    Node* slow=head;
    Node* fast=head;
    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //Now slow pointing to middle element.
    //Break the link list in the middle.
    Node* cur=slow->next;
    Node* prev=slow;
    slow->next=NULL;
    //Reverse the second half of linked list
    while(cur){
        Node* nextNode=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextNode;
    }
    //Check if the two link lists are equal
    Node* head1=head;
    Node* head2=prev;
    while(head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;

    }
    return true;
}

int main(){
    LinkedList ll1;
 
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(3);
    ll1.insertAtTail(2);
    ll1.insertAtTail(1);
  
    ll1.display();
    cout<<isPaindrome(ll1.head)<<endl;
    


    return 0;
}



















