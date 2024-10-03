//Given the head of a doubly linked list, the value of the linked list are sorted in non decreasing order. Find if there exists a pair of distinct nodes such that the sum of their. value is X. Return the pair in the form of a vector. [l r], where L and R are the values stored in the two nodes pointed by the pointers. If there are multiple such pairs return, any of them, if there is no such pairs return [-1,-1].
#include<bits/stdc++.h>
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
vector<int>pairSumDll(Node* head,Node* tail,int x){
        vector<int>ans(2,-1);
    while(head!=tail){
        int sum=head->val+tail->val;
        if(sum==x){
            ans[0]=head->val;
            ans[1]=tail->val;
            return ans;
        }
        if(sum > x){//I need smaller values, i will move my tail back
            tail=tail->prev;
        }
        else{//i need bigger values , i will move my head forwaed
            head=head->next;
        }
        
    }
    return ans;
}
int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(2);
  dll.insertAtEnd(5);
  dll.insertAtEnd(6);
  dll.insertAtEnd(8);
  dll.insertAtEnd(10);
  dll.display();
  vector<int>ans=pairSumDll(dll.head,dll.tail,11);
  cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}














