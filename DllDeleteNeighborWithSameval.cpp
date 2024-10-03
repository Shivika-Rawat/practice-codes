//Given the head of a doubly linked list, delete the notes whose neighbors have the same value traverse the list from right to left.
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
};

void deleteSameNeighbourNode(Node* &head,Node* &tail){
    Node* curNode=tail->prev;//Second last node
    while(curNode!=head){
        Node* preNode=curNode->prev;
        Node* nextNode=curNode->next;
        if(preNode->val==nextNode->val){
            //i need to delete the cur node
            preNode->next=nextNode;
            nextNode->prev=preNode;
            free(curNode);
        }
        curNode=preNode;
    }
}

int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(2);
  dll.insertAtEnd(1);
//   dll.insertAtEnd(1);
  dll.insertAtEnd(2);
  dll.insertAtEnd(1);
  
  dll.display();
 deleteSameNeighbourNode(dll.head,dll.tail);
 dll.display();
  

    return 0;
}














