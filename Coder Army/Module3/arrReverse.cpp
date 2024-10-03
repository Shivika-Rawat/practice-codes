#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={2,3,1,7,8,56,41,72,63,12};
    int s=0, e=9;
    while (s<e)
    {
       swap(arr[s],arr[e]);
       s++;e--;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"  ";
    }
   return 0; 
}
