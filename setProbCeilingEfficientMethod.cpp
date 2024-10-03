#include<bits/stdc++.h>
using namespace std;
//Efficient method.
void printCeiling(int arr[], int n){
    set<int>s;
    int res[n];
    for(int i=n-1;i>=0;i--){
        auto it=s.lower_bound(arr[i]);
        if(it==s.end()) res[i]=-1;
        else res[i]=*it;
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
}
int main(){
    int arr[]={100,50,30,60,55,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    printCeiling(arr,n);//-1 55 32 -1 -1 -1 
//O(n logn) TC
//sc:theta(n)

    return 0;
}