#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,5,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);//giving out of bound address
    for(auto it=v.rbegin(); it!=v.rend();it++){ //reverse iterator
        cout<<(*it)<<" ";
    }
    return 0;
}
//OP:  20 5 10 