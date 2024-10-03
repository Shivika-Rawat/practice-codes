
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    int *ptr=arr;
    cout<<sizeof(arr)<<endl;//12
    cout<<sizeof(ptr);//4


    char a[]={'g','f','g'};
    char *ptr1=a;
    cout<<sizeof(a)<<endl;//3
    cout<<sizeof(ptr1);//4
    
    return 0;

}