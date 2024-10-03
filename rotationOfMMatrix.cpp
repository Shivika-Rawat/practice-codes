//ROtation of matrix. rotate by 90 degree in a clockwise direction without using extra space.

#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<vector<int>> &v){
    int n=v.size();
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    
    }


    //reverse every row
    for(int i=0;i<n;i++){ 
        reverse(v[i].begin(), v[i].end());
    }

return;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }

    rotateArr(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}