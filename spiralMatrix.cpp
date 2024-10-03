//Givenan n*m matrix 'a'returnallelementsofthematrixinspiralorder
#include<bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>> &v){
     int left=0;
     int right= v.size()-1;
     int top=0;
     int bottom=v.size()-1;
     int direction =0;
     while(left<=right && top<=bottom){
        //left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        //top to bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        //right to left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        //bottom to top
        else{
            for(int row =bottom;row>=top;row--){
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        
//direction should be 0 1 2 3;
        direction=(direction+1)%4;
     }
    

}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    spiralMatrix(matrix);

    cout<<endl;

        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}
