/*

Divide by zero
No heap memory available
Accessing array element outside The allowed index range
Pop from an empty stack.

try{
    //The code that may throw exception.
}

throw: Used to throw an exception

catch:One or more cat blocks are used to handle the exception.
*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    try{
        if(y==0)
        throw 0;
        cout<<"Result is: "<<x/y;
    }
    catch(int x){
        cout<<"Divisor is 0";
    }

    return 0;
}
