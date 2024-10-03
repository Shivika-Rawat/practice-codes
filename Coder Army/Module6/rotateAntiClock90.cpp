//90 degree anticlockwise = 270 degree clockwise
/*
Enter the value of n: 3
1 2 3
4 5 6 
7 8 9

3  6  9  
2  5  8  
1  4  7 

*/
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
for(int k=0;k<3;k++){ //rotate 90degree clockwise 3 times to make 90 degree anticlockwise one time

    //Transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i][j],a[j][i]);
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
}
    //printing the rotated array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"  ";
        }cout<<endl;
    }

}