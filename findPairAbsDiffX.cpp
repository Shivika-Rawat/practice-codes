//Given a vector arr[] sorted in increasing order of N size and integer X, find if there exists a pair in the array whose absolute difference is exactly X..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,10,15,20,26};
    int n=5;
    int x=10;
    int i=0;
    int j=1;
    bool found=false;
    while(i<n and j<n){
        if(abs(arr[i]-arr[j])==x){
            found=true;
            break;
        }
        else if(abs(arr[i]-arr[j])<x){
            j++;
        }
        else{
            i++;
        }
    }

    if(found == true) cout<<"Yes";
    else cout<<"No";

    return 0;

}