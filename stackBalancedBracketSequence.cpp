#include<iostream>
#include<stack>
using namespace std;
//TC:O(n)   sc:O(n)
//cheque whether a given bracket sequence is balanced or not?
bool balancedBracketSequence(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];//current char
        if(ch=='[' or ch=='{' or ch=='('){
            st.push(ch);
        }
        else{
            //closing bracket
            if(ch==')' and !st.empty() and st.top()=='('){
                st.pop();
            }
            else if(ch=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else if(ch==']' and !st.empty() and st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s="(())((){(){()}})[((()()))]";
   
   cout<<balancedBracketSequence(s);

    return 0;
}