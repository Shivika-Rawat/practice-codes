#include<iostream>
// #include <math.h>
#include <climits>
using namespace std;
int search(int arr[],int N, int X){
    for(int i=0;i<N;i++){
        if(arr[i]==X)
        return i;
    }
    return -1;
}
int main(){
    int arr[10]={2,3,1,7,8,56,41,72,63,12};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=56;
    int idx;
    idx=search(arr,size,key);
    cout<<idx;
   return 0; 
}
