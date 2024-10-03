#include<bits/stdc++.h>
using namespace std;
int findLongest(int arr[],int n){
    int res=0;
    unordered_set<int>h;
    
    for(int i=0;i<n;i++)
    h.insert(arr[i]);

    for(int i=0;i<n;i++)
   {
    if(h.find(arr[i]-1)!=h.end()){
      int  curr=1;
        while(h.find(arr[i]+curr)!=h.end())
        curr++;
        res=max(res,curr);
    }
   }
    return res;
}

int main(){
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findLongest(arr,n);//4
}