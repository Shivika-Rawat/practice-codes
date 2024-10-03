#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    Node *Head, *Tail;
    Tail=Head= NULL;
    
    int arr[]={2,4,6,8,10};
  /*  //insert node at begining
    
    //Linked list dosent exist
    for(int i=0;i<5;i++){
 
    if(Head==NULL){
        Head= new Node(arr[i]);
    }
    //Link list exist
    else{
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;
       
    }
    } 
    */
   //insert the value at end
   for(int i=0;i<5;i++){

   
   //Linked list is empty
   if(Head==NULL){
    Head=new Node(arr[i]);
    Tail=Head;
   }
   //link list exist karti h
   else{
    Tail->next=new Node(arr[i]);
    Tail=Tail->next;
   }
   }
    //print the value
    Node *temp=Head;
    while(temp){ // while(temp!=NULL)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
