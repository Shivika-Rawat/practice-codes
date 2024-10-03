//Chocolate distribution problem
/*
ip:7,3,2,4,9,12,56
m=3;
op:2   //So we need to produce the minimum difference in a set of M elements. So we need to pick M packets such that the difference between minimum and maximum is minimum.

ip:3,4,1,9,56,7,9,12
m=5;
op:6
*/
#include<bits/stdc++.h>
using namespace std;
int minDiff(int arr[],int n,int m){
    if(m>n)  return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;(i+m-1)<n;i++)
    res=min(res,(arr[i+m-1]-arr[i]));

    return res;
}
int main(){

    int arr[]={7,3,2,4,9,12,56};
    int m=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minDiff(arr,n,m);//2
    //TC:O(n logn)

    return 0;
}