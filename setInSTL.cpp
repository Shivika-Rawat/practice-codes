//Set in C++ are used to store sorted data. Say you have some data coming and you want to store it as sorted way. So what do you do? You put it in a set. Now, after putting it into a set, whenever you traverse the data, you will always get this data and sort it with. 
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x:s) cout<<x<<" ";//5 10 20  Set will print the number in sorted order and the default order is always increasing order.
    return 0;

}