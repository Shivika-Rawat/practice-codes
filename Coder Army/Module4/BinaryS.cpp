#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    //start end mid;
    int s=0, end=n-1, mid;
    while(s<=end){
        mid=s+(end-s)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        s=mid+1;
        else end=mid-1;
    }
    return -1;
}

int main(){
    int arr[20];
    int n;
    cout<<"ENter the size of array";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int key;
        cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}