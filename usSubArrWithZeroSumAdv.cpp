#include<bits/stdc++.h>
using namespace std;
//O(n)
bool isSum(int arr[], int n){
    unordered_set<int>s;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if(s.find(pre_sum)!=s.end())
        return true;
        if(pre_sum==0)
        return true;
        s.insert(pre_sum);
    }
    return false;
}
int main(){
    int arr[]={1,4,-3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    if(isSum(arr,n)) 
    cout<<"yes";
    else cout<<"no";
}