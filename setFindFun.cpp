#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    
    auto it=s.find(10);
    if(it==s.end()) cout<<"Not Found"<<endl;
    else cout<<"found"<<endl;
  
    return 0;
}
//output:found