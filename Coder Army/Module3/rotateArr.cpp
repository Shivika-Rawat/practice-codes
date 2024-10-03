 #include<iostream>
// #include <math.h>
#include <climits>
using namespace std;
void rotateArr(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2; i>=0;i--)
    arr[i+1]=arr[i];
    arr[0]=last;
}
int main(){
    int arr[10]={2,3,1,7,8,56,41,72,63,24};
    int size= sizeof(arr)/sizeof(arr[0]);
   rotateArr(arr,size);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   return 0; 
}
