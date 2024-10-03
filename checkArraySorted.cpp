#include<bits/stdc++.h>
using namespace std;
bool isArraySort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // cout<<isArraySort(a,n);
    if(isArraySort(a,n)==false){
        cout<<"Not Sorted";
    }
    else{
        cout<<"Sorted";
    }
    return 0;
    

}