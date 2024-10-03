#include<bits/stdc++.h>
using namespace std;

struct test{
    int x;
    bool operator<(const test &t) const{
        return (this-> x <t.x);
    }
};
//set for user defined data type
int main(){
    set<test>s;
    s.insert({5});
    s.insert({20});
    s.insert({10});
    for(test t:s) cout<<t.x<<" ";//5 10 20 
    return 0;
}
//Application of set
//Sorted stream of data
//Doubly ended priority queue