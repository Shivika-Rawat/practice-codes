#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>l;
    l.assign({10,20,30,10,10,50,10});
    l.remove(10);
    for(auto it=l.begin();it!=l.end();it++)
    cout<<(*it)<<" ";

    return 0;
}

//output:  20 30 50 