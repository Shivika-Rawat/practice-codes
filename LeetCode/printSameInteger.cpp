#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
         int digit= n%10;
          if((ans>INT_MAX /10) ||(ans<INT_MIN /10)){
            return 0;
         }
        ans=ans+(digit*pow(10,i));
        n=n/10;
       i++;
    }
    cout<<"The no is :"<<ans;
}