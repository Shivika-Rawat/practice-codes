//Given an array of an integer and a target value X, print whether X exists in the error not.
#include<iostream>
using namespace std;
bool f(int *arr, int n, int i,int x){
    if(i==n) return false;//base case
    return (arr[i]==x || f(arr,n,i+1,x));

}

int main(){
    int arr[]={5,46,23,14,78,52,56,23};
    int n=8;
    int x;
    cin>>x;
    bool res=f(arr,n,0,x);
    if(res==true) cout<<"Yes!";
    else cout<<"no!";
    return 0;

}