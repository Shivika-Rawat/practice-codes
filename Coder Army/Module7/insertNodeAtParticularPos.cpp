//Add node at end , using recursion
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

Node* CreateLinkList(int arr[],int idx, int size){
    //Base case 
    if(idx==size)
    return NULL;
    Node *temp;
    temp=new Node(arr[idx]);
    temp->next=CreateLinkList(arr,idx+1,size);

    return temp;  //TC:O(n), SC:O(n)
}
int main(){
    Node *Head;
    Head=NULL;

    int arr[]={2,4,6,8,10};
    Head=CreateLinkList(arr,0,5);
     //Insert Node at Particular positon
     int x=3;//position
     int value=30;
     Node *temp=Head;
     x--;
     while(x--){
        temp=temp->next;
     }
     Node *temp2=new Node(value);
     temp2->next=temp->next;
     temp->next=temp2;
      //print the value
    temp=Head;
    while(temp){ // while(temp!=NULL)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}













