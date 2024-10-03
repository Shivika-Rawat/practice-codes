//Our standard library exceptions like bad.alloc, bad.cast etc inherit from exception class directly or indirectlly
//C++ standard library. There are standard exceptions. For example, bed alloc is an exception which is thrown by new operator in C. We use new operator for dynamic memory allocation and it throws bad allow if there is any problem in the memory allocation. One thing about all standard library exceptions is they all directly or indirectly inherited from exception class. So exception class is root of all the exceptions. When.we are writing user defined exceptions, we can also write our class to inherit from this exception class. In fact it is considered as a recommended practice. Here I have created my own defined class my exception and it inherits from the exception class. This exception class has a function called what the name of this function is W Hudd Vault and this function is a virtual function in exception class. So when you're writing your own class you can override this function and you can write whatever you wish to write in your own class. What function?
#include<iostream>
#include<exception>
using namespace std;
class MyException: public exception{
    virtual const char *what() const throw()z{
        return "Exception occurred\n";
    }
};
int main(){
    try{
        throw MyException();
    }
    catch(exception &e){
        cout<<e.what();
    }
} 


























