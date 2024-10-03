/*Containers:
Simple:pair,vector,forward list, list
Container Adapter:Stack,Queue,priority Queue
Associative:set,map,unordered_set,unordered_map;

Algorithms:binary_search,find,reverce,sort,....
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,15,8,20};
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    if(binary_search(arr,arr+4,15)) cout<<"present";
    else cout<<"Not present";

}
