/*changing passed parameters
pasing large objects
Dynamic memory allocation
Implementing data structures like linkedList, Tree, BST etc
To do system level programming
To return multiple values
Used for accessing array elements 
To pass array arguments
*/


//Function Parameter and pointers
//prob with normal parameter passing:
//changes are not reflected, The whole object is copied
#include<iostream>
using namespace std;
void fun(int *x){
    *x=*x+5;
}
void fun1(string *s){
    cout<<*s<<endl;//do not make another copy using pointer
}
int main(){
    int x=10;
    string s="Geeksforgeeks cources";
    fun(&x);
    fun1(&s);
    cout<<x<<endl;//10
    return 0;
}
