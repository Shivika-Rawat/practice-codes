#include<iostream>
#include<set>
//Set will never restore duplicate values
using namespace std;
int main(){
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(auto it=s.begin();it!=s.end();it++)  cout<<(*it)<<" ";  //20 10 5 
    cout<<endl;
    for(auto it=s.rbegin();it!=s.rend();it++)  cout<<(*it)<<" ";//5 10 20 //reverse iterator 
    return 0;
}