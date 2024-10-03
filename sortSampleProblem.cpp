//The thief problem
//ip: 3,7,2,5,12,30
//k=3          //Thief will pick: 30 12 7
//op:49

//ip: 8,10,2,50,80,20
//k=4
//op:160

//TC:O(n logn)
//Using priority queue, we can achieve a better time complexity of the solution
#include<bits/stdc++.h>
using namespace std;
int getMaxVal(int arr[],int n,int k){
    sort(arr,arr+n,greater<int>());
    int res=0;
    for(int i=0;i<k;i++)
    res=res+arr[i];

    return res;
}
int main(){
    int arr[]={3,7,2,5,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<getMaxVal(arr,n,k);//9

    return 0;
}