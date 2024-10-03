//Given two numbers p&q, find the value p^q (p ki power q) using a recursive function
#include<iostream>
using namespace std;
int powerfun(int p,int q){
    //base case
    if(q==0) return 1;
    return p*powerfun(p,q-1);
}

int main(){
    int p,q;
    cin>>p>>q;
    int res=powerfun(p,q);
    cout<<res;
return 0;
}

//TC: O(q*constant(mul))=O(q)