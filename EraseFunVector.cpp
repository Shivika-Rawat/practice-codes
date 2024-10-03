#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v{10,5,20,15,45,87,56,23};v.erase(v.begin());
    for(int x:v){
        cout<<x<<" ";//5 20 15 45 87 56 23 
    }cout<<endl;
    v.erase(v.begin(),v.end()-1);//it removes element from begin to end ele, except last element
     for(int x:v){
        cout<<x<<" ";//23 
    }cout<<endl;

    return 0;
}