//Given a matrix a of dimension n *m and two coordinates (l1,r1) and (l2,r2), return the sum of the rectangle from (l1,r1) and (l2,r2).
#include<bits/stdc++.h>
using namespace std;
int ractangleSum(vector<vector<int>>&mat,int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=mat[i][j];
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
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    int sum=ractangleSum(mat,l1,r1,l2,r2);
    cout<<sum<<endl;

    return 0;

}

/*
3 4
1 2 3 4
5 6 7 8
9 10 11 12
1 1  l1,l2
2 2   r1,r2
1 2 3 4 
5 6 7 8 
9 10 11 12 
34   sum=6+7+10+11 =34
*/