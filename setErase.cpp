//Erase is function is used to remove an element on the set or a group of element from the set.
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(7);
    s.insert(17);
     auto it= s.find(7);
    s.erase(it);
   
    for(int x:s) cout<<x<<" ";//10 17 20 50

    cout<<endl;
    s.insert(11);
    s.insert(45);
    s.insert(63);
    s.insert(21);
    s.insert(32);
    s.insert(8);
    s.insert(27);
    auto itr= s.find(32);
    s.erase(itr,s.end());
     for(int x:s) cout<<x<<" ";//8 10 11 17 20 21 27 
    return 0;
}