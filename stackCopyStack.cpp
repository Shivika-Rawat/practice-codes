//Copy contents of one stack to another in same order.Whenever we transfer data from one stack to another stack, it gets  reversed. hum 2 stack lenge ek temp or ek result , pehle temp m data dalenge then phir temp se result m , an then we get appropriate result.  TC: o(n)  Sc: o(n)
#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int>temp;
    while(not input.empty()){
        //Do the process till the line input stack doesn't become empty.
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>res=copyStack(st);
    while(not res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}





