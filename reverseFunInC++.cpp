//Reverse function is used to reverse elements of a container in the given range
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={10,20,30};
    reverse(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    vector<int>v1={10,20,30,40,50};
    reverse(v1.begin()+1,v1.end());
    for(int x:v1)
    cout<<x<<" ";
    cout<<endl;

   int arr[]={10,20,30,40,50};
    reverse(arr,arr+5);
    for(int x:arr)
    cout<<x<<" ";
 cout<<endl;

 string s="geeks";
 reverse(s.begin(),s.end());
 cout<<s;
 //We can use reverse function to reverse any container that provides bidirectional iterators. Iterators that can be moved forward and backward. And example containers are at a factor string, dq list. Please note thatforward list does not have bidirectional iterator. We cannot move back in the forward listHow does it function work? It simply has to iterators. And what is going to do? It's going to reverse the elements and do iterators, and going to move those iterators toward each other. That's the simple idea that reverse function uses. And that is how the time complexity of reverse function is linear in terms ofthe elements given in the range. So if your range has N elements, then your reverse function is going to take theta(n) time

    return 0;
}