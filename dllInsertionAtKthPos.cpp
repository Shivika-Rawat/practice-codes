//insersion at kth position
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"  ";
            temp=temp->next;
        }cout<<endl;
    }
    void insertAtStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void insertAtEnd(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return ;

        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
    }
    void insertAtKthPos(int val, int k){


        //assuming k is less or equal to length of dll.
        Node* temp=head;
        int count=1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        //temp wil be pointing to the node at (k-1)th position
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        
        newNode->prev=temp;
        newNode->next->prev=newNode;
        return ;

    }
    void deleteAtStart(){
        if(head==NULL){
            return ;
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL){//idf doubly link list had only 1 node
            tail=NULL;
            
        }else{
            head->prev=NULL;
        }//TC:O(1)
        free(temp);
        return;
    }

    void deleteAtEnd(){
        if(head==NULL) return ;
    
    Node* temp=tail;
    tail=tail->prev;
    if(tail==NULL){
        head=NULL;
    }else{
        tail->next=NULL;
    }
    free(temp);
    return;
    }

    void deleteAtPosition(int k){

        //assuming k is less than or equal to lenth of dll
        Node* temp=head;
        int counter=1;
        while(counter<k){
            temp=temp->next;
            counter++;
        }
        //now temp is pointing to node at kth position
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return ;
    }
};

int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(1);
  dll.insertAtEnd(2);
  dll.insertAtEnd(3);
  dll.insertAtEnd(4);
  dll.insertAtEnd(5);

  
  dll.insertAtKthPos(6,3);
  dll.display();
//  dll.deleteAtStart();
//  dll.display();
    // dll.deleteAtEnd();
    // dll.display();
    dll.deleteAtPosition(3);
    dll.display();
    return 0;
} 