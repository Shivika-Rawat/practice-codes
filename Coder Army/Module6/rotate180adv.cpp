#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[3][3];
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<n;j++){//reverse col wise
        int s=0,e=n-1;
        while(s<e){
            swap(a[s][j],a[e][j]);
            s++; e--;
        }
     }
    
//Reverse each row
    for(int i=0;i<n;i++){
        int s=0, e=n-1;
        while(s<=e){
            swap(a[i][s],a[i][e]);
            s++; e--;
        }
    }
    
    //printing the rotated array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"  ";
        }cout<<endl;
    }

}