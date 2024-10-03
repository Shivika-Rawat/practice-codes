#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<char,int ,int>t('g',20,30);
    cout<<tuple_size<decltype(t)>::value<<endl;//3
    char x;
    int y,z;
    tie(x,y,z)=t;
    // tie(x,ignore,z)=t;  //We can write it as also.   
    cout<<x<<" "<<y<<" "<<z<<endl;// g 20 30

    return 0;
}