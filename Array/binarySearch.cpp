#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid= s+ (e-s)/2;
    while(s<=e){
        if(arr[mid]==key)
        return mid;
        //go to right part
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    return -1;

}

int main(){
    int even[8]={4,5,11,14,15,16,17,18};
    int odd[7]={4,5,8,9,11,15,46};

    int index=binarySearch(even,8,16);
    cout<<"Index of 16 is :"<<index+1<<endl;
    int in=binarySearch(odd,7,11);
    cout<<"Index of 11 is :"<<in+1<<endl;
    int win=binarySearch(even,8,3);
    cout<<"Index of 3 is :"<<win<<endl;



return 0;

}