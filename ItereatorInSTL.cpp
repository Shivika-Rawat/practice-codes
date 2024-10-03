#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {10,20,30,40,50};
    vector<int>::iterator i=v.begin();  //or auto i;
    //for list  list<in>::iterator i;  and same for other
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=v.end();//out of boundary
    i--;//reach at last ele
    cout<<(*i)<<" ";
    return 0;
}