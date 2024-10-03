//Rotate the given array a by K steps where K is non-negative 
//Note: where K can be greater than N as well, where N is the size of array a

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int k=4;
    // k can be greater than n
    
         k=k%n;
    
   
    int ansArr[6];
    int j=0;
    //Inserting last K elements in ans array.
    for(int i=n-k;i<n;i++){
        ansArr[j++]=arr[i];
    }
    //Inserting first NK elements in ans array
    for(int i=0;i<=k;i++){
        ansArr[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansArr[i]<<" ";
    }


    return 0;

}