//Given a boolean 2D array where each row is sorted, find the row with the maximum number of 1's.
#include<bits/stdc++.h>
using namespace std;

int leftMostOneROw(vector<vector<int>> &v){
    int leftMostOne=-1;
    int maxOnesRow=-1;
    int j=v[0].size()-1;
    //finding left most 1 in 0th roe
    while(j>=0 &&v[0][j]==1){
        
        leftMostOne=j;
        maxOnesRow=0;
        j--;
    }

    //Check in rest of the rowe if we can find an one left to the leftmostone.
    for(int i=1;i<v.size();j++){
        while(j>=0 && v[i][j]==1){
            leftMostOne=j;
            maxOnesRow=i;
            j--;
        }
    }
    return maxOnesRow;

}


int maximunOneRow(vector<vector<int>> &v){
    int maxOnes=INT_MIN;
    int maxOneRow=-1;
    int col=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberOfOnes=col-j;

                if(numberOfOnes > maxOnes){
                    maxOnes = numberOfOnes;
                    maxOneRow=i;
                }
                break;
            }
        }
    }

    return maxOneRow;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    // int res=maximunOneRow(vec);
    int res=leftMostOneROw(vec);

    cout<<res<<endl;

}
       