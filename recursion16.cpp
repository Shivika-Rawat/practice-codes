//Given an array of integer print sums of all subsets in it, output sums can be printed in any order.

#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int n,int i,int sum,vector<int>&res){
    if(i==n) {
        res.push_back(sum);
        return;
    }
    f(arr,n,i+1,sum+arr[i],res);//pick the ith element
    f(arr,n,i+1,sum,res);//do not pick the ith element

}

int main()
{
int arr[]={2,4,5};
int n=3;
vector<int>res;
f(arr,n,0,0,res);
for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
}


    return 0;
}