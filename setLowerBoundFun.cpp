#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto i = s.lower_bound(5);
    if(i!=s.end()) cout<<(*i)<<" ";//5

    auto it = s.lower_bound(6);
    if(it!=s.end()) cout<<(*it)<<" ";//10
    auto itr = s.lower_bound(25);
    if(itr!=s.end()) cout<<(*itr)<<" ";//Given element is greater than the largest
    else  cout<<"Given element is greater than the largest";

    return 0;
}
//Set uses Red black Tree:and it is self balancing binary tree


// begin , end, rbegin, rend, cbegin, cend, size, empty()  =>O(1)
//insert , find , count , lower_bound, upper_bound, erase(val)  => O(logn)
//erase(it)--------------Amortized TC  => O(1)