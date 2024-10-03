//Find the second largest element in the given array. if only unique elements are present in array.
#include<bits/stdc++.h>
using namespace std;
int largestElementIdx(int arr[], int size){
    int max=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIdx=i;

        }
    }
    return maxIdx;
}

int main(){
    int arr[]={-12,-3,5,7,-6,10,10};
    int size=7;
    int idxOfLargest=largestElementIdx(arr,size);
    arr[idxOfLargest]=INT_MIN;
    int idxOfSecondLargest=largestElementIdx(arr,size);
    cout<<arr[idxOfSecondLargest];

    return 0;

}
