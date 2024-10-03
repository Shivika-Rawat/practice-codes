//Find the second largest element in the given array. if duplicate elements are present in array.
#include<bits/stdc++.h>
using namespace std;
int secondLargestEle(int arr[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max&&arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;

}


int main(){
    int arr[]={-12,-3,10,5,7,-6,10,10};
    int size=8;
    
    cout<<secondLargestEle(arr,size);


    return 0;

}
