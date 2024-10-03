//Given the head of linguistics, rotate the linguists to right by k places.
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

Node* rotateByK(Node* &head, int k){
    //find length of ll
    int n=0;
    //find tail node
    Node* tail=head;
    while(tail->next){
        n++;//Finding length of linked list
        tail=tail->next;//Finding last node.    
    }
    n++;//for including last node
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    //traverse n-k nodes
    Node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    //temp is now pointing to( n-k)th node
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;

//TC:O(2n-k)
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
    ll1.head=rotateByK(ll1.head,5);
    ll1.display();
   
    
    
 
  

    return 0;
}



















