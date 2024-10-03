//Insert at bottom / any Index
#include<iostream>
#include<stack>
using namespace std;
//iterative sol
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

//recursive sol
void rec(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    rec(st,x);
    st.push(curr);
}

//Any position insert

void insertAt(stack<int>&st, int x,int idx){
    stack<int>temp;
    int n=st.size();
    int count=0;
    while(count< n-idx){
        count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
 insertAt(st,100,1);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }

    return 0;
}