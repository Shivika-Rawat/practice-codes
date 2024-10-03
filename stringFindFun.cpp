#include<iostream>
using namespace std;
int main(){
    string str="geeksforgeeks";
    int res=str.find("eek");
    if(res==string::npos)
    cout<<"Not present"<<endl;
    else cout<<"First occurrence at index "<<res;

    return 0;
}