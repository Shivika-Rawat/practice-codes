#include<iostream>
using namespace std;
int add(int x, int y){return (x+y);}
int multiply(int x,int y){return x*y;}
int comput(int x,int y,int (*fun_ptr)(int , int)){
    return fun_ptr(x,y);
}
int main(){
    cout<<comput(10,20,add)<<"\n";
    cout<<comput(10,40,multiply);
    return 0;
}