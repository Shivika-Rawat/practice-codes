//Find the total number of pairs in the array whose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1,5,2};
    int targetSum=7;
    int size=7;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSum)
            pairs++;
        }
    }

    cout<<pairs;//3

    return 0;
}