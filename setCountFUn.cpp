#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    if(s.count(10)) cout<<"found";//found
    else cout<<"not found";
    return 0;
}
// count function as the name suggests, returns count of occurances of an element in the container, but set does not contain duplicates. So count function here returns 1 or zero. It can be used in place of find function, find and count. They both can be used to check if an element is present or not. And differences find a function returns iterator to be element. If it is present, count function on the other end only tells you whether it is present or not present. 