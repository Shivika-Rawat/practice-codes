#include<iostream>
using namespace std;

bool checkIsSorted(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
       
    }
     return true;
}
int main(){
    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    if(checkIsSorted(arr,n)==false){
        cout<<"Not sorted";
    }
    else{
        cout<<"Array is Sorted";
    }
return 0;
}