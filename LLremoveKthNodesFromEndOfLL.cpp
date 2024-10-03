//Given the height of a linked list, remove the kth node from the end of the list and return its head.
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
//Assuming K is always less than length of linked list..
void removeKthNodeFromEnd(Node* &head,int k){
    Node* ptr1=head;
    Node* ptr2=head;
    //move pointer2 by K steps ahead.
    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){//K is equal to length of linked list.
    //We have to delete head node.
    Node* temp=head;
    head=head->next;
    free(temp);
    return ;
    }
    //Now pointer2 Is k steps ahead of pointer one.

    //When pointer2  is ath null (end of list), pointer 1 will be at node to be deleted.
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //Now pointer one is pointing to the node before the kth node from end.
    //Note to be deleted is ptr1->next
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);

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


    ll1.display();
    removeKthNodeFromEnd(ll1.head,3);
    ll1.display();

    return 0;
}




