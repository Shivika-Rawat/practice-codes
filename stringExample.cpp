#include<iostream>
using namespace std;
int main(){
    string s1="abc";
    string s2="abc";
    if(s1==s2)
    cout<<"Same";
    else if(s1<s2)
    cout<<"Smaller";
    else
    cout<<"Greater";

    string name;
    cout<<"Enter your name:";
    // cin>>name;//It do not read the string after the space.
    // getline(cin,name);//It read the string after the space
    getline(cin,name,'$');//After dollar it stops the string,when we enter the doller then string will print
    cout<<"Your name is : "<<name;
    
    return 0;
}
