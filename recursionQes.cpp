//Given an integer, find out the sum of its digits using recursion
#include<iostream>
using namespace std;
int f(int n){
    if(n>=0 and n<=9)    return n;
    return f(n/10)+(n%10);
}
int main(){
    int n;
    cin>>n;
    int res=f(n);
    cout<<res;

return 0;
}

//TC: d*c=o(d)
//SC:O(d)