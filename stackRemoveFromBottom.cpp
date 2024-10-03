//Remove from bottom / any index
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

void removeAtBottom(stack<int>&st){
    stack<int>temp;
    int n=st.size();
    int count=0;
    while(st.size()!=1){
        count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
//recursive sol

void recRemoveAtBottom(stack<int>&st){
    if(st.size()==1){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    recRemoveAtBottom(st);
    st.push(curr);
}

//remove at index



int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
  recRemoveAtBottom(st);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }

    return 0;
}