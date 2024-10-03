//Prefix sum over columns. rectangle sum from (0,0) to (l1,r1).
#include<bits/stdc++.h>
using namespace std;

int rectangleSum(vector<vector<int>> &mat,int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i=0;i<mat.size();i++){
        for(int j=1;j<mat[0].size();j++){
            mat[i][j]+=mat[i][j-1];
        }
    }


    //Prefix sum array column wise..
    
for(int i=1;i<mat.size();i++){
for(int j=0;j<mat[0].size();j++){
    mat[i][j]+=mat[i-1][j];
}
    
}

//printing prefix sum 2D arr
for(int i=0;i<mat.size();i++){
    for(int j=0;j<mat[0].size();j++){
        cout<<mat[i][j]<<" ";
    }cout<<endl;
}
int  topSum=0,leftSum=0,topleftSum=0;
if(l1!=0)  topSum=mat[l1-1][r2];
if(r1!=0)  leftSum=mat[l2][r1-1];
if(l1!=0 && r1!=0) topleftSum=mat[l1-1][r1-1];
sum=mat[l2][r2]-topSum-leftSum+topleftSum;

return sum;

}
int main(){
        int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n , vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
   for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }


    int sum=rectangleSum(mat,l1,r1,l2,r2);
   
    cout<<"Sum:"<<sum<<endl;
    return 0;
}