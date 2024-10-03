#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];

    }
    return sum;

}
int main(){
    int n;
    int a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
cout<<"Sum of Array is: "<<sumOfArray(a,n);

    return 0;

}