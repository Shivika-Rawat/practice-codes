//Efficient solution.
#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
  unordered_set<int>s;
  for(int i=0;i<n;i++)
  s.insert(arr[i]);
  for(int x:s)
  cout<<x<<" ";
}
/*Printing in same order as they are inserted into array.*/
void printSameOrder(int arr[], int n){
  unordered_set<int>s;
  for(int i=0;i<n;i++){
    if(s.find(arr[i])==s.end()){
        cout<<arr[i]<<" ";
        s.insert(arr[i]);
    }
  }
  
}

int main(){
int arr[]={10,7,10,10,8,3,9};
int n=sizeof(arr)/sizeof(arr[0]);
print(arr,n); cout<<endl;
printSameOrder(arr,n); cout<<endl;

int arr1[]={4,8,5,8,7,5};
int n1=sizeof(arr1)/sizeof(arr1[0]);
print(arr1,n1);cout<<endl;
printSameOrder(arr1,n1);cout<<endl;

int arr2[]={11,15,45};
int n2=sizeof(arr2)/sizeof(arr2[0]);
print(arr2,n2);cout<<endl;
printSameOrder(arr2,n2);cout<<endl;

int arr3[]={5,5,5};
int n3=sizeof(arr3)/sizeof(arr3[0]);
print(arr3,n3);cout<<endl;
printSameOrder(arr3,n3);
/*TC:O(n)
9 10 7 8 3 
10 7 8 3 9 

7 5 8 4 
4 8 5 7 

45 15 11 
11 15 45 

5 
5 
*/
return 0;}