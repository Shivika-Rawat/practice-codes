//Given 2 sorted arrays, write a program to merge them in a soted manner
//input: num1[]={5,8,10}, num2[]={2,7,8}
//output: num[3]={2,5,7,8,8,10}


//tc: O(n1+n2)
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int n1, int arr2[],int n2 , int arr3[]){
    int a=0;//arr1
    int b=0;//arr2
    int c=0;//arr3
    while(a<n1 and b<n2){
        if(arr1[a]<arr2[b]){
            arr3[c++]=arr1[a++];
        }
        else {
            arr3[c++]=arr2[b++];
        }
    }
    while(a<n1){
        arr3[c++]=arr1[a++];
    }
while(b<n2){
    arr3[c++]=arr2[b++];
}

}
int main(){
    int arr1[]={5,8,10,11,12};
    int arr2[]={2,7,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr3[n3];
    merge(arr1,n1,arr2,n2,arr3);
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }cout<<endl;

    return 0;
}