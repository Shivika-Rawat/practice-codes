//Linear data structure used to store a list of values
/*  

*/
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;

    Node(int data){
        val=data;
        next=NULL;
    }
};
void insrtAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    //TC:O(1)
}
void insertAtTail(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //Temp has reached last node.
    // TC:O(n)
    temp->next=new_node;
}
void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insrtAtHead(head,val);
        return;
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int cur_pos=0;
    while(cur_pos!=pos-1){
        temp=temp->next;
        cur_pos++;
    }
    //Time is Pointing to the node at pos-1
    //TC:O(n)
    new_node->next=temp->next;
    temp->next=new_node;
}
void updateAtPos(Node* &head,int k,int val){
    Node* temp=head;
    int cur_pos=0;
    while(cur_pos!=k){
        temp=temp->next;
        cur_pos++;

    }
    //Temp will be pointing to Kth node
    // TC:O(k)
    temp->val=val;
}
void deleteAtHead(Node* &head){
    Node* temp=head;//Note to be deleted  //TC:O(n)
    head=head->next;
    free(temp);

}
void deleteAtTail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    //Now second last points to second last node.
    Node* temp=second_last->next;//No to be deleted
    second_last->next=NULL;
    free(temp);
    //TC:O(n)
}
void deleteAtPos(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int cur_pos=0;
    Node* prev=head;
    while (cur_pos!=pos-1)
    {
        prev=prev->next;
        cur_pos++;
    }
    //Previous is pointing to node at pos-1
    //Tc:O(n)
    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);

}

int main(){

    Node* head=NULL;
    insrtAtHead(head,2);
    insrtAtHead(head,6);
    insrtAtHead(head,7);
    display(head);
    insrtAtHead(head,12);
    insrtAtHead(head,1);
    display(head);
   insertAtTail(head,3);
   insertAtTail(head,14);
   display(head);
    insertAtPosition(head,4,1);
    display(head);
    updateAtPos(head,2,5);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPos(head,1);
    display(head);
    return 0;
}
