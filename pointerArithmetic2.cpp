#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int *ptr1=arr;
    cout<<*ptr1<<" "<<ptr1<<endl;//10 0x61fef8
    int *ptr2 = ptr1+3;
    cout<<*ptr2<<" "<<ptr2<<endl;//40 0x61ff04
    cout<<(ptr2-ptr1)<<endl;//3

    return 0;

}