#include<iostream>
#include<queue>
using  namespace std;
class Node{
    public:
    int data;
    int* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

class Queue{
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
   void  enqueue(int data){
    Node* newNode=new Node(data);
    if(this->head==NULL)
   { //LL is empty
    this->head=this->tail=newNode;
    }
   else{
    this->tail->next=newNode;
    this->tail=newNode;
   }
    this->size++;
   }
};

int main(){

    return 0;
};