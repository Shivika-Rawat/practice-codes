//Given 2 sorted link list merge them into one singly link list such that the resulting list is also sorted..
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
Node* mergeLL(Node* &head1,Node* &head2){
    Node* dummyHeadNode=new Node(-1);
    Node* pr1=head1;
    Node* pr2=head2;
    Node* pr3=dummyHeadNode;
    while(pr1 and pr2){//Koi Bhi ek Null na Ho Jaye.
        if(pr1->val<pr2->val){
            pr3->next=pr1;
            pr1=pr1->next;
        }
        else{
            pr3->next=pr2;
            pr2=pr2->next;
        }
        pr3=pr3->next;
    }
    if(pr1){
        pr3->next=pr1;
    }
    else{
        pr3->next=pr2;
    }
    return dummyHeadNode->next;
}
//TC:O(n+m)

int main(){
    LinkedList ll1;
    LinkedList ll2;
    LinkedList ll3;
    ll1.insertAtTail(1);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll1.display();
    ll2.display();
    ll3.head=mergeLL(ll1.head,ll2.head);
    ll3.display();
    
 
  

    return 0;
}



















