/*
i/p: 10 100 200 30 120 120
o/p: 30 120 -1 120 120 -1

i/p: 10 20 30 40
o/p: 20 30 40 -1

i/p: 40 30 20 10
o/p: -1 -1 -1 -1
*/
//Naive method
#include<bits/stdc++.h>
using namespace std;
void printCeiling(int arr[], int n){
    for(int i=0;i<n;i++){
        int diff=INT_MAX;
        for(int j=i+1;j<n;j++)
        if(arr[j]>=arr[i])
        diff=min(diff,arr[j]-arr[i]);
        if(diff==INT_MAX) cout<<-1<<" ";
        else cout<<(arr[i]+diff)<<" ";
    }
}
int main(){
    int arr[]={10,100,200,20,120,120};
    int n=sizeof(arr)/sizeof(arr[0]);
    printCeiling(arr,n);//20 120 -1 120 120 -1 


    return 0;
}