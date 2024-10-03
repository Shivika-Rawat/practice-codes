//Given a vector array[] sorted in increasing order, Return an array of square of each number sorted in increasing order, where size of factor one less than sized, less than 101.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-25,-3,-1,0,2,10};
    int n=6;
    int result[n];
    int i=0, j=n-1, k=n-1;
    while (i<=j and k>=0)
    {
        if(abs(arr[i]) > abs(arr[j])){
            result[k]=arr[i]*arr[i];
            i++; k--;                
        }
        else{
            result[k]= arr[j]*arr[j];
            j--;k--;
        }
    }
    for(int i=0;i<n;i++) cout<<result[i]<<" ";

    return 0;
}