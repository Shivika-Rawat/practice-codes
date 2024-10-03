//Given a positive integer n, generate an N*N matrix filled with elements from 1 to n in spiral order.
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>createSpiralMatrix(int n){
    vector<vector<int>> m(n,vector<int> (n));
    int left=0;
    int right= n-1;
    int top=0;
    int bottom=n-1;
    int direction=0;
    int value=1;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                m[top][i]=value++;
            }
            top++;
        }
        else if(direction==1){
            for(int j=top;j<=bottom;j++){
                m[j][right]=value++;
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                m[bottom][i]=value++;
            }
            bottom--;
        }
        else{
            for(int j=bottom;j>=top;j--){
                m[j][left]=value++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> m(n,vector<int>(n));
    m=createSpiralMatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

}
