#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
            int swappd=0;
        for(int j=0;j<=i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swappd=1;
            }
        }
        if(swappd==0) break;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
   
    return 0;
}