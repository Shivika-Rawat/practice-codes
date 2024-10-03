//Sub array with zero sum
/*
ip: 1,4,13,-3,-10,5
op: yes
ip: 1,4,-3,1,2
op: yes
ip: 3,-1,-2,5,6
op: yes
ip: 5,6,0,8
op: yes
*/
#include<bits/stdc++.h>
using namespace std;
//Naive sol
bool isSum(int arr[], int n){
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            if(curr_sum==0)
            return true;
        }
       
    }
     return false;
}
//O(n^2)
int main(){
    int arr[]={1,4,-3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    if(isSum(arr,n)) 
    cout<<"yes";
    else cout<<"no";
}