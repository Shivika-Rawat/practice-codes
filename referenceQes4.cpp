#include<iostream>
using namespace std;
int main(){
    string s1="GFG ",s2="Cources";
    string &&s3=s1+s2;// && rvalue references
    s3="Welcome to "+s3;
    cout<<s3;  //elcome to GFG Cources
    return 0;
}