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

Node* swapAdjacent(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //Recursive case
    Node* secondNode=head->next;
    head->next=swapAdjacent(secondNode->next);
    secondNode->next=head;//Reversing the link between first and second node
    return secondNode;
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
    ll1.insertAtTail(8);
    ll1.display();
    ll1.head=swapAdjacent(ll1.head);
    ll1.display();
/*OP:
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> NULL
2 -> 1 -> 4 -> 3 -> 6 -> 5 -> 8 -> 7 -> NULL
*/
    return 0;
}




















