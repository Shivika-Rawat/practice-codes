#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3, x=10;
    vector<int>v(n,x);
    for(auto it=v.begin(); it!=v.end(); it++){//Vetta traversal using iterator. 
    //
        cout<<(*it)<<" ";

    }
    return 0;
}
//op:10 10 10 