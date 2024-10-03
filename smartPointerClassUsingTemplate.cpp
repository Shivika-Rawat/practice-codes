#include<bits/stdc++.h>
using namespace std;
template<class T>
class SP{
    T *ptr;
    public:
    SP(T *p=NULL){ptr=p;}
   ~ SP(){delete ptr;}
   T &operator*(){ return *ptr;}
   T *operator ->(){ return ptr;}
   
};
int main(){
   SP<int> sp(new int());
   *sp=20;
   cout<<*sp;

    return 0;
}

//Problem with this smart point of class
//Class code is same main code is change
int main(){
    int *ptr1=new int(10);
    {
        int *ptr2=ptr1;
        SP <int>sp(ptr2);
    }//we assign 10 first ptr1 and then ptr2, ptr2 deallocate memory and the 10 memory is free
    cout<<*ptr1;//10 is already free , so here You want to access that memory which are deallocated. It will cause runtime error and  programme will crash
    //To remove this problem, we haveThat's a difficult problem. We need to have something like reference count. How many variables are referring to this memory? And if reference count becomes zero, then only we should be allocating the memory. And c++ library provides implementation of the setup. So there are three types of pointers in C library, unique pointer, which is summarily something similar to what we created here. Then there is a shared pointer, and then there is a weak pointer.