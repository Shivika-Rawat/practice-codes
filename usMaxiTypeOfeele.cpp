/*Maximum types of elements
ip: arr[]={1,1,2,1,3,1}
k=2
op:3

ip: arr[]={1,1,2,1,3,1}
k=3
op:2

ip: arr[]={1,1,1,1,1}
k=4
op:1
*/

//TC:O(n)
//SC:O(n)
#include<bits/stdc++.h>
using namespace std;
int maxDistinct(int arr[], int n,int k){
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);

    int d=s.size();
    if(d>=n/k)
    return n/k;
    else return d;
}
int main(){

    int arr[]={1,1,2,3,1,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<maxDistinct(arr,n,k);//4
}