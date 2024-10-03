/*Pair some in unsorted array
ip:3,2,8,15,-8
sum=17
op: yes

ip:5,8,-3,6
sum=3;
op:yes

ip:2,4,6,3
sum=11;
op:no
*/
//Naive sol
#include<bits/stdc++.h>
using namespace std;
bool isPair(int arr[], int n , int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum)
            return true;
        }
    }
return false;
}//tc:O(n^2)
int main(){
int arr[]={3,2,8,15,-8};
int n=sizeof(arr)/sizeof(arr[0]);
int sum=17;
if(isPair(arr,n,sum)) cout<<"yes";
else cout<<"no";
    return 0;
}