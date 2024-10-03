//Jagged Array : A 2D array is calles jagged arr if we have different no of items in individual rows
//when we creat arr of vector ,then individual rows can have dynamic no of elements , you can dynamically remove and add the elements, They automatically grow and shrink
//In vectOfVect method we can dynamically add and remove row also,no of rows are also a dynamic integer,allowed to dynamic integer

//Disadvantage: the dynamic rows are not stored at contiguous memory locations,they slidly less cache friendly compared to 2D native arr

#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";   //0 0 1 1 2 2 
        }
    }
}
int main(){
    int m=3,n=2;
    vector<vector<int>> arr;
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(i);
            
        }
        arr.push_back(v);
    }
    print(arr);

    return 0;

}