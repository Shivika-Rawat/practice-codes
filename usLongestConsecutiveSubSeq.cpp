//Longest consecutive subsequence , Means numbers are continuously without any gap, Order doesn't matter

/*
ip: 1,9,3,4,2,20            //1 2 3 4
op: 4

ip:8,20,7,30           //7 8
op:2

ip:20,30,40
op:1

method 1: sorting= Short the array and then compare first element with second element. And cheque if is 2nd element is just one greater than previous element. TC:O(nlog n)
method 2: hashing
*/
#include<bits/stdc++.h>
using namespace std;
int findLongest(int arr[],int n){
    sort(arr,arr+n);
    int res=1,curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
        curr++;
        else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}

int main(){
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findLongest(arr,n);//4
}