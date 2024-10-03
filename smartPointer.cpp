//Problem with normal pointers The problem is memory leak. If you dynamically allocate memory, and if you don't look at memory, compiler does not give you any error warning. And as a programmer, it is your responsibility to ensure that whatever dynamically allocated memory you have, you de allocated. And if you forget to de allocate the memory, then you programme has memory leak problem. And this becomes a big, big problem if you have a programme like this. If you have

#include<iostream>
using namespace std;


// void fun(){
//     int *ptr=new int[10];

// }
// int main(){
//     while(true){
//         fun();
//     }
// }

//Smart Pointer try to solve memory leak problem.

//And this is how we create an object of this class. We create an object, and we pass a pointer when we are constructing the object. And if we do not pass anything, then, by default, ptr becomes null. So the idea is this, you handed it over a pointer, right? And object of this class will take care of automatic deallocation of memory for that pointer. And this class is written only for integer pointer, right? And integer pointer memory can be allocated can be given to this. And this will take care of the deallocation. So I created an object sp here. I passed pointer to the Dynamically allocated memory, new int. And after this, I am able to use this sp as a normal pointer. And how is it possible? The reason that this works is we have overloaded this operator. We have overloaded operator star So. This operator overloading works this way. You use operator keyword, and then you use the operator name, right? Star here. And this Becomes the function`
class SP{
    int *ptr;
    public:
    SP(int *p=NULL){ptr=p;}
    ~SP(){delete ptr;}
    int &operator *(){return *ptr;}
};
int main(){
    SP sp(new int());
    *sp=20;
    cout<<*sp;//20
    return 0;
}