#include<bits/stdc++.h>
using namespace std;
/*
ip:10 8 10 7 7 6
op:10 7

ip:10 20 10 10
op: 10 10

ip:10 20
op:

ip:2 2 2 2
op: 2 2 2                     prints repeated element n-1 time
*/
//Naive sol
void printRepeating(int arr[], int n){
    for(int i=1;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                flag=true;
                break;
            }
        }
        if(flag==true)
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,8,10,7,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr,n);

    return 0;
}