//Stack unwinding is a concept which says that if a function throws an exception, and if this function does not handle the exception, then the control goes to the caller. And if the caller also does not handle the exception, then control goes to the caller of the caller. And we keep on searching the handler for the exception in the function call stack until we find the antler. And once you find a handler that handle handler gets the control and then your program continues after the handler.
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
int main(){
    try{
        f2();
    }
    catch(int i){
        cout<<"Caught exception\n";
    }
    cout<<"Bye........";

//If there will be no handler or not, catch block, then the program will be crashed.
    return 0;
}