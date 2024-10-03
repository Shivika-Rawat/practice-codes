//if We want to store the data in decreasing order. Then we can use this greater function. This greater function is always used in stl to reverse the order. So what do we get
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x:s)  cout<<x<<" ";//20 10 5 
    return 0;
}