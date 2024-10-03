//Given two numbers p&q, find the value p^q (p ki power q) using a recursive function
#include<iostream>
using namespace std;
int powerfun(int p,int q){
    //base case 
    if(q==0) return 1;
    //even case
    if(q%2==0){
        int res=powerfun(p,q/2);
        return res*res;
    }

    //odd case
    else{
        int res=powerfun(p,(q-1)/2);
          return p*res*res;
    }
  
}

int main(){
    int p,q;
    cin>>p>>q;
    int res=powerfun(p,q);
    cout<<res;
return 0;
}

//TC: O(log(q)))