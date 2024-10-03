#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int &z=x;
    z=y;
    z=z+5;
    cout<<x<<" "<<y<<" "<<z;//25 20 25
    return 0;
}