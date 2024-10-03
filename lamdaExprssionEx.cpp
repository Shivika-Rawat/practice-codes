#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,-20,5,30};
     int n=sizeof(arr)/sizeof(arr[0]);
    auto  myCmp=[](int a,int b){//We can create a variable full lambda function also.
        return abs(a)<abs(b);
    };
    sort(arr,arr+n,myCmp);
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}