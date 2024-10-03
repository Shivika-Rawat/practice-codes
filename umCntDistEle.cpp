//Count testing element in every window.
/*
ip:10,20,20,10,30,40,10
k=4
op:2 3 4 3

ip:10,10,10,10
k=3
op:1 1

ip:10,20,30,40
k=3
op:3 3
*/
#include<bits/stdc++.h>
using namespace std;
//Naive Sol: tc:  o((n-k)*k*k)
void printDist(int arr[],int n,int k){
    for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag=false;
            for(int p=0;p<j;p++)
            if(arr[i+j]==arr[i+p]){
                flag=true; break;
            }
            if(flag==false)
            count++;
        }
        cout<<count<<" ";
    }
}
//Efficient solution using hashing: TC:O(n)
void printDistinct(int arr[], int n,int k){
    unordered_map<int ,int>freq;
    for(int i=0;i<k;i++)
    freq[arr[i]]++;
    cout<<freq.size()<<" ";
    for(int i=k;i<n;i++){
        freq[arr[i-k]]--;
        if(freq[arr[i-k]]==0)
        freq.erase(arr[i-k]);
        freq[arr[i]]++;
        cout<<freq.size()<<" ";
    }
}
int main(){
    int arr[]={10,20,20,10,30,40,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=4;
    printDist(arr,n,k);cout<<endl;cout<<endl;
    printDistinct(arr,n,k);

    return 0;
}