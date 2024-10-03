/*
ip: 4 8 5 8 7 5
op:4 8 5 7

i/p:10 8 4 10 10 4
op:10 8 4
*/
//naive sol
#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={10,8,10,10,7};
int n=sizeof(arr)/sizeof(arr[0]);
print(arr,n); cout<<endl;

int arr1[]={4,8,5,8,7,5};
int n1=sizeof(arr1)/sizeof(arr1[0]);
print(arr1,n1);cout<<endl;

int arr2[]={11,15,45};
int n2=sizeof(arr2)/sizeof(arr2[0]);
print(arr2,n2);cout<<endl;

int arr3[]={5,5,5};
int n3=sizeof(arr3)/sizeof(arr3[0]);
print(arr3,n3);


/*
10 8 7 
4 8 5 7 
11 15 45 
5 
*/
return 0;

}