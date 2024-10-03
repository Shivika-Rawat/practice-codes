//(Row-wise)
//Calculating the horizontal sum for each row in the matrix.

#include<bits/stdc++.h>
using namespace std;
int rectangleSum(vector<vector<int>> &mat,int l1,int r1,int l2,int r2){
    int sum=0;
    //Prefix some array row wise.
for(int i=0;i<mat.size();i++){
    for(int j=1;j<mat[0].size();j++){
        mat[i][j]+=mat[i][j-1];
    }
}

for(int i=l1;i<=l2;i++){
    if(r1!=0){
        sum+=mat[i][r2]-mat[i][r1-1];
}
else{
    sum+=mat[i][r2];
}
    }
    

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