#include<bits/stdc++.h>
using namespace std;
int secondLar(int arr[],int size){
    int ans=INT_MIN;
    //largest ele
    for(int i=0; i<size;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    //second lar
    int second=INT_MIN;
     for(int i=0; i<size;i++){
        if(arr[i]!=ans)
        second=max(arr[i],second);
    }
    return second;
}
int main(){
    int arr[10]={2,3,1,7,81,56,41,72,63,12};
    int size= sizeof(arr)/sizeof(arr[0]);
    int SecLar=secondLar(arr,size);
    cout<<SecLar;
   return 0; 
}
