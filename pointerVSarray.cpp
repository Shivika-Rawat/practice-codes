#include<iostream>
using namespace std;
 int main(){
    int arr[]={10,20,30};
    int *ptr=arr;
    cout<<sizeof(arr)<<endl;//12
    cout<<sizeof(ptr)<<endl;//4
    cout<<*(arr+2)<<endl;//30  or
    cout<<arr[2]<<endl;//30  

    cout<<ptr[2]<<endl;//30 or
    cout<<*(ptr+2)<<endl;//30 

    return 0;

 }
   