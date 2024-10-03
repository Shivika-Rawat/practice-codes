#include<bits/stdc++.h>
using namespace std;
// postfix expression(reverse polish notation): operand operand operator
// prefix expression(polish notation): operator operand operand 
// infix expression: operand operator operand 
int calc(int v1,int v2,char op){
    if(op=='^'){
        return pow(v1,v2);
    }
    if(op=='*'){
        return v1*v2;
    }
    if(op=='/'){
        return v1/v2;
    }
    if(op=='+'){
        return v1+v2;
    }
        return v1-v2;
    
}
int precedence(char ch){
    if(ch=='^') return 3;
    if(ch=='*' or ch=='/') return 2;
    else if(ch=='+' or ch=='-') return 1;
    else return -1;
}
int eval(string &str){
    stack<int>nums;
   stack<char>ops;
   for(int i=0;i<str.size();i++){
    if(isdigit(str[i])){
        nums.push(str[i]-'0');
    }
    else if(str[i]=='('){
        ops.push('(');
    }else if(str[i]==')'){
        while(not ops.empty() and ops.top() != '('){
            char op=ops.top();
            ops.pop();

            int v2=nums.top();
            nums.pop();
            int v1=nums.top();
            nums.pop();
            nums.push(calc(v1,v2,op));
        }
        if(not ops.empty()) ops.pop();
    }
    else{
         while(not ops.empty() and precedence(ops.top())>= precedence(str[i])){
            char op=ops.top();
            ops.pop();

            int v2=nums.top();
            nums.pop();
            int v1=nums.top();
            nums.pop();
            nums.push(calc(v1,v2,op));
        }
        ops.push(str[i]);
    }
   }
    while(not ops.empty() ){
            char op=ops.top();
            ops.pop();

            int v2=nums.top();
            nums.pop();
            int v1=nums.top();
            nums.pop();
            nums.push(calc(v1,v2,op));
        }
    return nums.top();
}
int main(){
    string str="1+(2*(3-1))+2";
    cout<<eval(str)<<endl;
    return 0;
}
//Tc:O(n)      sc:O(n)