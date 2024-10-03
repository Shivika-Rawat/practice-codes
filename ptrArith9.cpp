//Wild pointer : Wild pointer is a type of a pointer where.the user.declares the pointer.but not initialise  it. Due to this, it ends up pointing to.some random memory location.Due to this, we might get some undefined behavior and crases.In some cases, we might get segmentation fault.generally segmentation fault is Memory related issue.


#include<iostream>
using namespace std;
int main(){
    int x;
    int *ptrw;//wild pointer


    int *ptr=NULL;  //NULL pointer
    int *ptr1=0;  //NULL pointer //0 is mostly a special reserved memoryaddress.            
    int *ptr2='\0';  //NULL pointer



    int *ptrd=NULL;
    {
        int x=10;
        ptrd=&x;  //Dangling pointer
    }


}

//Types of pointers
/*
Null pointer: If we want to have a pointer variable, which is just declared but will get address later to store.We can use null pointer.  If we want to run A null Pointer, we can get a segmentation fault. An immediately program will be terminated.    int *ptr=NULL;    //NULL pointer
If we will try to access the null pointer, it will get runtime error or segmentation fault and Dereferencing null pointer.



dangling pointer :It is a type of pointer that points to a memory location that is not valid.



void pointer:
*/