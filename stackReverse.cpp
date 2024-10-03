//reverse stack
#include<iostream>
#include<stack>
using namespace std;
//TC: O(n)
//SC: O(n)
void reverse(stack<int>&st){
    stack<int> t1,t2;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        t1.push(curr);
    }
    while(not t1.empty()){
        int curr=t1.top(); 
        t1.pop();
        t2.push(curr);
    }
    while(not t2.empty()){
        int curr=t2.top();
        t2.pop();
        st.push(curr);
    }
}

void insertAtBottom(stack<int> &st, int x){
    //TC:O(n)
    //SC:O(n)
    stack<int> temp;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);  //this is the point where x got inserted at the bottom
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}

void f(stack<int>&st){
    if(st.empty()) return ;
    int curr=st.top();
    st.pop();
    f(st);
    insertAtBottom(st,curr);
}



int main(){
 stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
  f(st);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }



    return 0;
}






