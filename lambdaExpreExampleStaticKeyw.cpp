#include<iostream>
using namespace std;
int main(){
    static int  x=5,y=10;
    auto lambda_expr=[](int a){
        x=x+a;
        y=y+a;
    };
    lambda_expr(20);
    cout<<x<<" "<<y<<endl;//25 30
    return 0;

}