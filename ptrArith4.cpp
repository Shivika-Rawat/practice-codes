#include<iostream>
using namespace std;
int main(){
    int arr[2]={8,2};
    int *ptr=&arr[0];
    cout<<++*ptr<<endl;//First, the dereference then increment the Dereference value.
    cout<<arr[0]<<" "<<arr[1]<<" "<<endl;        

    return 0;
}