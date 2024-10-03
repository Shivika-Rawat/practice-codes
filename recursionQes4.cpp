//recursion on Arrays
//print all the element of array recursively
#include<iostream>
using namespace std;
void print(int *arr,int idx,int n){
if(idx==n) return ;
cout<<arr[idx]<<endl;
print(arr,idx+1,n);
}


int main(){
int n=7;
int arr[]={4,8,9,6,37,8,45};
print(arr,0,n);
return 0;
}
