#include<iostream>
using namespace std;
void f1()throw(int){
    cout<<"F1 begins\n";
    throw 100;
    cout<<"f1 ends \n";
}
void f2()throw(int){
    cout<<"f2 begins\n";
    f1();
    cout<<"f2 ends\n";
}
void f3(){
    cout<<"f3 begins\n";
   try{
    f2();
   }
   catch(int i){
    cout<<"Caught Exception\n";
   }
    cout<<"f3 ends\n";
}
int main(){
    
        f3();
    
    
    cout<<"Bye........";

//If there will be no handler or not, catch block, then the program will be crashed.
    return 0;
}