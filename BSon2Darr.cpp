//Search the target value in a 2D integer matrix of dimension N* M and return 1 if found. else Return zero. This matrix has the following properties.
//1 Integer in each row are sorted from left to right.
//2. The first integer of each row is greater than the last integer of the previous row.
//input matrix:=[[1,3,5,7],[10,11,16,20],[23,30,34,60]],
//target=3
//output:1
#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>&a,int target){
    int n=a.size();//no of rows
    int m=a[0].size();//no of cols
    int lo=0,hi=n+m-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int x=mid/m;
        int y=mid%m;
        if(a[x][y]==target){
            return true;
        }
        else if(a[x][y]< target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return false;


}

int main(){

vector<vector<int>>a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int target=5;
cout<<searchMatrix(a,target);
    return 0;
}
