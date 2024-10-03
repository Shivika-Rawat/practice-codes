#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid;
    while (start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==k)
        return mid;
        else if(arr[mid]<k)
            start=mid+1;
    
        else end=mid-1;
    }
    
   return -1; 
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    cout<<"Enter the key:";
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}