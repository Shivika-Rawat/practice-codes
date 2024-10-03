#include<bits/stdc++.h>
using namespace std;
//sort large element to last
void selectionSort(int arr[], int size){
    
    for(int i=size-1;i>=0;i--){
        int idx=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[idx])
            idx=j;
        }
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={10,8,2,3,1,4,5,7,9,6};
    int size=10;
    selectionSort(arr,size);
    return 0;
}