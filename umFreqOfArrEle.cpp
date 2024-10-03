//Frequencies of array element .
/*
ip:10,5,20,5,10,5
op: 10 2
    5  3
    20 1

ip:100,100,100,100
op: 100 4

ip:10 20 30
OP: 10 1
    20 1
    30 1
*/
//Tc:O(n)
#include<bits/stdc++.h>
using namespace std;
/*Naive Sol*/
int printFreq(int arr[], int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    for(auto x:m)
    cout<<x.first<<" "<<x.second<<endl;
}
int main(){
    int arr[]={10,5,20,5,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printFreq(arr,n);
    return 0;
}