/*Tail node connected with head node*/
/*
We can start traversing from any node to print all nodes till we reach visited node.
when we have to traverse ll in circular fashion multiple times

*/
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val= data;
        next=NULL;
    }
};
class CircularLL{
    public:
    Node* head;
    CircularLL(){
        head = NULL;
    }

    void display(){
        Node* temp=head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;
        } while(temp!=head);
        cout<<endl;
    }

    void printCircular(){
        Node* temp=head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<endl;
    }

    void insertAtStart(int val){
        //TC:O(n)
        Node *new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        new_node->next=head;//circular ll
        return ;
    }
    Node* tail=head;
    while(tail->next!=head){

        tail=tail->next;
    }
    //now tail is pointing to the last node
    tail->next=new_node;
    new_node->next=head;
    head=new_node;
}

    void insertAtENd(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return ;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
    }

    void deleteAtStart(){
        if(head==NULL){
            return;
        }
        //TC:O(n)
        Node* temp=head;
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);
    }

    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node* tail=head;

        while(tail->next->next!=head){
            tail=tail->next;
        }
        //TC:O(n)
        //here tail is pointing to the second last node
        Node* temp=tail->next; //tobe deleted
        tail->next=head;
        free(temp);
    }
};

int main(){
    CircularLL cll;
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.insertAtStart(6);
    cll.insertAtStart(7);
    cll.insertAtStart(8);
    cll.insertAtENd(9);
    cll.display();

    cll.deleteAtStart();

    cll.display();

    // cll.printCircular();
    cll.deleteAtEnd();
    cll.display();
    return 0;
}