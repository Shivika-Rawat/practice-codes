/*
A critical point in a linked list is defined as either a local maxima or local minima, given a linked list tail, return an array of length two containing [minimum distance, maximum distance] where minimum distance is the minimum distance between any two distinctcritical points and maximum distance is the maximum distance between any two distinct critical points. If there are fewer than 2 trick critical points, return - 1 - 1.
Not that the node can only be local maxima/minima if there exists both a previous node and a next node.
*/

//If Element is greater than its both neighbor Is called local maxima and if element is less than its both neighbor is called local minima.
//1      5          2             6        3
//---  local-max    local-min   local-max    //So these three points are critical points
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
bool isCriticalPoint(Node* &curNode){
    if(curNode->prev->val<curNode->val and curNode->next->val< curNode->val){//local maxima
    return true;
    }
    if(curNode->prev->val > curNode->val and curNode->next->val > curNode->val){//local manima
    return true;
    }
    return false;
}
vector<int>distanceBetweenCriticalPoints(Node* head,Node* tail){
    vector<int>ans(2,INT_MAX);//Size to an initialized with int max.
    int firstCP=-1,lastCP=-1;
    Node* curNode=tail->prev;
    if(curNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int curPos=0;
    while(curNode->prev!=NULL){
        if(isCriticalPoint(curNode)){
            if(firstCP==-1){
                firstCP=lastCP=curPos;
            }
            else{
                ans[0]=min(ans[0],curPos-lastCP);//min ditance
                ans[1]=curPos-firstCP;//Max distance.
                lastCP=curPos;
            }
        }
        curPos++;
        curNode=curNode->prev;
    }
    if(ans[0]==INT_MAX){
        ans[0]=ans[1]=-1;
    }
    return ans;
}

int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(1);
  dll.insertAtEnd(5);
  dll.insertAtEnd(4);
  dll.insertAtEnd(2);
  dll.insertAtEnd(6);
  dll.insertAtEnd(3);
  dll.display();
  vector<int>ans=distanceBetweenCriticalPoints(dll.head,dll.tail);
  cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}














