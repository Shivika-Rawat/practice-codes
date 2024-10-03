/*
Function pointer:A function pointer holds an address of text(Instructions or executable code.) section..
Stores address our function (set of instruction.)
Like normal pointers, we can pass a function pointor to other function.
Used in qshort(),sort() , for_each() or any other place where we wish to provide functionality as a parameter.
Used to implement virtual Functions
*/
#include<iostream>
using namespace std;
void fun(){
    cout<<"GFG";
}
int main(){
    void (*fun_ptr)()=&fun;//& is optional
    fun_ptr();
    return 0;
}