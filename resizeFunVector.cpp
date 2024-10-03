//Resize function is used to resize the vector
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v{10,5,20,15};
    v.resize(3);
    for(int x:v){
        cout<<x<<" ";//10 5 20
    }cout<<endl;
    v.resize(5);
    for(int x:v){
        cout<<x<<" ";//10 5 20 0 0            //5 size vect if its int it will fill 0 at blank spaces
    }cout<<endl;
    v.resize(8,100);
    for(int x:v){
        cout<<x<<" ";//10 5 20 0 0 100 100 100 
    }cout<<endl;

    return 0;

}
//front(), back(), empty(), begin(), rbegin(), crbegin(), cbegin(),end(), rend(), crend(),cend(),size() these TC:O(1)
//push_back(), pop_back() these TC in wort case=O(n), Avg case:O(1)