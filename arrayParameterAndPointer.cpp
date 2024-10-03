#include<iostream>
using namespace std;
void fun(int arr[]){//int arr[]==int *arr   it is equal to first element of arr , it is ref of aee 0th index
    int n=sizeof(arr)/sizeof(arr[0]);//it print only 1 element sizeod pointer size/sizeof arr[0](onr integer)
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    fun(arr);
    return 0;
}

/*
output:  void fun(int arr[]){
                  ^
10 20 30 40 
10
*/


//We should never use sizeof for an arr inside a fun,whenever you passing an arr as a parameter, 
//do not use size of to get the sizeof arr

// correct
#include<iostream>
using namespace std;
void fun(int arr[], int n){
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    fun(arr,n);
    return 0;


}