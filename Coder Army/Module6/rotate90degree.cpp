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

     int mat[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[j][n-i-1]=a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }

}