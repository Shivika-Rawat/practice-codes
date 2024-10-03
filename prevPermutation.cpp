/*
ip:2,1,3
op:1,3,2

ip:1,3,2,4,5
op:1,2,5,4,3

ip:5,4,1,2,3
op:5,3,4,2,1
*/
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,4,1,2,3};
    prev_permutation(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    return 0;
}
/*Working of previous permutation function
1.Travers from right find the first element that is not in increasing order. Let this element be x.
2.Find the largest element on right of X that is smaller than X. Let this element  be Y
3.Swap X and Y.
4.Reverse the elements after new y.
*/