#include<iostream>
using namespace std;

int findUnique(int *arr, int size){
  int ans=0;
  for(int i=0;i<size;i++){
    ans=ans^arr[i];
  }
  return ans;
}
int main(){
    
    int arr[9]={5,6,7,8,5,4,4,6,7};
cout<<findUnique(arr,9 );

}
//fin
// XOd R=a^a=0unique no , which is not repeated