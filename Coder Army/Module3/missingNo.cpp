#include<bits/stdc++.h>
using namespace std;
int missingNum(int arr[], int n){
     //sum of all element in an array
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    //sum of n number
    int ans = n* (n+1)/2;
    return ans-sum;
}
 main(){
    int arr[10]={1,2,3,4,5,6,8,9,10};
    int size=10;
    int missNo=missingNum(arr,size);
    cout<<missNo;
}