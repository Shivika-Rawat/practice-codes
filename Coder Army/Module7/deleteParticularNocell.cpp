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

//delete node at particular location
    int x=3;//given node which we have to del

    if(x==1){
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    }
    x--;
    Node *curr=Head;
    Node *prev=NULL;
    while(x--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;

    //print the value
    Node *temp=Head;
    while(temp){ // while(temp!=NULL)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
