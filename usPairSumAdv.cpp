#include<bits/stdc++.h>
using namespace std;
//TC:O(n)   SC:O(n)
bool isPair(int arr[], int n , int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
       if(s.find(sum-arr[i])==s.end())
       return true;
       else s.insert(arr[i]);
    }
return false;
}
int main(){
int arr[]={3,2,8,15,-8};
int n=sizeof(arr)/sizeof(arr[0]);
int sum=17;
if(isPair(arr,n,sum)) cout<<"yes";
else cout<<"no";
    return 0;
}