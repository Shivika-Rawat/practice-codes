//It is mainly used for sorting data stored in containers, which allow random access. An example containers which allow random access are array, normal arrays, vectors anddg. These are. some containers which allow random access. Random access means you can access if item in cost and time. So sort can be used to sort elements for all these container
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={10,20,5,7};
    sort(arr,arr+4);
    for(int x:arr)
    cout<<x<<" ";
    sort(arr,arr+4,greater<int>());//Greater function is used to reverse the number.sequence of number.it change the default order.
    cout<<endl;
    for(int x:arr)
    cout<<x<<" ";
/*
5 7 10 20 
20 10 7 5 
*/

cout<<endl;
vector<int>v={5,7,20,10};
sort(v.begin(),v.end());
for(int x:v)
cout<<x<<" ";
cout<<endl;

sort(v.begin(),v.end(),greater<int>());
for(int x:v)
cout<<x<<" ";
cout<<endl;
    return 0;
}