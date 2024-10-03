#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,45,32,56,78};
    int array[6]={1,2};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(array)<<endl;

    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"No of elements:"<<n;

    return 0;
}