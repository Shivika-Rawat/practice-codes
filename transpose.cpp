//Changing rows to column and column to rows.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n, vector<int> (n,0));
    vector<vector<int>> ans(n, vector<int> (n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            vec[i][j]=t;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";

        }cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            ans[i][j]=vec[j][i];
        }
    }
    cout<<endl;
    cout<<"Transpose :"<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";

        }cout<<endl;
    }
}