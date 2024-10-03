/*
ip:arrival time: 900 940
ip:departure time: 1000 1030
op:2  //meet max guest
*/
#include<bits/stdc++.h>
using namespace std;
//TC: O(n log n)
int MaxCount(int arr[],int dep[],int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n &&j<n){
        if(arr[i]<=dep[j]){
            curr++; i++;
        }
        else{
            curr--; j++;
        }
        res=max(res,curr);
    }
    return res;
}
int main(){
    int arri[]={900,600,700};
    int dep[]={1000,800,730};
    int n=3;
    cout<<MaxCount(arri,dep,n);//2

    return 0;
}

