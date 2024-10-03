#include<iostream>
using namespace std;
void fun(int a[], int n){
    cout<<sizeof(a)<<endl;;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<sizeof(arr)<<endl;
  fun(arr,6);
    
    return 0;
    
}