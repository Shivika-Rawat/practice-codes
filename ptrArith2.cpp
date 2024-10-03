#include<iostream>
using namespace std;
int main(){
    int arr[2]={7,9};
    int *ptr=&arr[0];
    cout<<*++ptr<<endl;//First move pointer by 4 bytes. Then dereference it
    cout<<arr[0]<<" "<<arr[1]<<" "<<endl;        

    return 0;
}