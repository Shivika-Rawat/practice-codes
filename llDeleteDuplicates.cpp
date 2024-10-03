//Given the head of a sorted linked list, delete all duplicates such that each element appears only once, return the linked list sorted as well..
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

void deleteDuplicateNode(Node* &head){
    Node* cur_node=head;
    while(cur_node){//or cur_node!=NULL
        while(cur_node->next!=NULL and cur_node->val==cur_node->next->val){
            //Delete current node
            Node* temp=cur_node->next;//Note to be deleted
            cur_node->next=cur_node->next->next;
            free(temp);
        }
        //This loop ends when current node and next node values are different.
    cur_node=cur_node->next;

    }
  //TC: O(n)
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    ll.insertAtTail(8);
    ll.display();
    deleteDuplicateNode(ll.head);
    ll.display();


    return 0;
}




