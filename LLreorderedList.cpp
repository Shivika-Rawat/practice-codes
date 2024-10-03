//Given the head of single link lists. group all the notes with odd indices together followed by the nodes with even indices and return the reordered list.
//Jo Odd Indexes per nodes h unko sath m leke aana h or jo even indixes pr nodes h unko sath m lana hai
/*ex:
1 2 3 4 5 6
op:1 3 5 2 4 6
*/
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

Node* oddEvenLL(Node* &head){
    if(!head){
        return head;
    }
    Node* evenHead=head->next;
    Node* oddPtr=head;
    Node* evenPtr=evenHead;
    while(evenPtr and evenPtr->next){
        oddPtr->next=oddPtr->next->next;
        evenPtr->next=evenPtr->next->next;
        oddPtr=oddPtr->next;
        evenPtr=evenPtr->next;
    }
    oddPtr->next=evenHead;
    return head;
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
    ll1.head=oddEvenLL(ll1.head);
    ll1.display();
   
    
    
 
  

    return 0;
}



















