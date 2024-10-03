//The problem is to count all the possible path on an M *N grid from top left (grid [0[0]) to bottom right (grid [M - 1] and [N- 1]). having constraints that from each cell you can either move only to right or down..


#include<iostream>
using namespace std;

int f(int i,int j,int m,int n){
    if(i==m-1 and j==n-1) return 1;
    if(i>=m or j>=n) return 0;
    return  f(i,j+1,m,n)+f(i+1,j,m,n);
}

int main(){
cout<<f(0,0,2,3);



    return 0;

}