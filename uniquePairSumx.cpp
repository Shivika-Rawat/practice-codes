//Given a vector Arr[] sorted in increasing order of N size and integer X, find the number of unique pairs that exist in the array whose absolute sum is exactly.
#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={-2,-1,0,1,3,4,6,8,11,12};
int x=12,n=10;
//code to find if there is a pair with sum x;
int i=0,j=n-1;
int ans=0;
while(i<j){
    if(arr[i]+arr[j]==x){
       ans++; i++; j--;
    }
    else if(arr[i]+arr[j]<x){
        //sum is less thax x, increase the sum
        i++;
    }
    else{
        //sum is more than x, decrease the sum
        j--;
   }

}
   cout<<ans<<endl;

return 0;

}
