#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>s;
s.insert(10);
s.insert(5);
s.insert(20);
s.clear();
cout<<s.size()<<" ";// 0 

    return 0;
}