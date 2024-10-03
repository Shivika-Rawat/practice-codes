//You are given an array of K linked lists.Each link list is sorted in ascending order, merged all the thing list into one sorted link list and return it.
#include<bits/stdc++.h>
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
Node* mergeLL(Node* &head1,Node* &head2){
    Node* dummyHeadNode=new Node(-1);
    Node* pr1=head1;
    Node* pr2=head2;
    Node* pr3=dummyHeadNode;
    while(pr1 and pr2){//Koi Bhi ek Null na Ho Jaye.
        if(pr1->val<pr2->val){
            pr3->next=pr1;
            pr1=pr1->next;
        }
        else{
            pr3->next=pr2;
            pr2=pr2->next;
        }
        pr3=pr3->next;
    }
    if(pr1){
        pr3->next=pr1;
    }
    else{
        pr3->next=pr2;
    }
    return dummyHeadNode->next;
}
//TC:O(n+m)

Node* mergeKLinkedList(vector<Node*>&lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
     Node* mergedHead=  mergeLL(lists[0],lists[1]);
     lists.push_back(mergedHead);
     lists.erase(lists.begin());
     lists.erase(lists.begin());
    }
    return lists[0];
}
int main(){
    LinkedList ll1;
    LinkedList ll2;
    LinkedList ll3;
    
    ll1.insertAtTail(1);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);
    
    ll2.insertAtTail(2);
    ll2.insertAtTail(4);
    ll2.insertAtTail(5);

    ll3.insertAtTail(3);
    ll3.insertAtTail(6);
    ll1.display();
    ll2.display();
    ll3.display();
    vector<Node*>lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);
   
    LinkedList mergedLL;
    mergedLL.head=mergeKLinkedList(lists);
    mergedLL.display();

  

    return 0;
}



















