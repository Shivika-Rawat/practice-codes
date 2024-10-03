#include<vector>
#include<list>
#include<iostream>
using namespace std;
//Fill is a utility function that takes a begin iterator and end iterator. And it fills all the values from begin iterator until end iterator with a given value. We can fill a sub array also.

//TC:O(n)  or thet(n)
int main(){
    vector<int>v={10,20,30,40,50,60,76,80,90};
    fill(v.begin(),v.end(),5);
    for(int x: v)
    cout<<x<<" ";//5 5 5 5 5 5 5 5 5  
    cout<<endl;
    fill(v.begin()+1,v.end()-2,44);
    for(int x: v)
    cout<<x<<" ";//5 44 44 44 44 44 44 5 5  
    cout<<endl;

    int arr[]={10,20,30,40,50,60,70,80};
    fill(arr+1,arr+8,7);
    for(int x:arr)
    cout<<x<<" ";//10 7 7 7 7 7 7 7 
    cout<<endl;

    list<int>l={10,20,30,40};
    fill(l.begin(),l.end(),5);
    for(int x:l)
    cout<<x<<" ";//5 5 5 5
    cout<<endl;

    string s="geeks";
    fill(s.begin(),s.end(),'g');
    cout<<s;//ggggg

    return 0;
}