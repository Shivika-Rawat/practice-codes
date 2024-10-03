//Disruptor  function is called when object is deleted.Cannot pass any parameter into this destructor fun
//Used to initialise an object.This is function which is called when an object is created.It has same name as class name.
//Types of constructor: default constructor, parameterized constructor ,copy constructor:
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    Rectangle(){//Default constructor, no arguments are passed
        l=0;
        b=0;
    }
Rectangle(int x, int y){//Parameterized constructor- arguments passed
l=x;
b=y;

}
Rectangle(Rectangle& r){// copy constructorIt is used to, initialise  an object,by Another existing object
l=r.l;
b=r.b;
}

~Rectangle(){//destructor
    cout<<"Destructor is called"<<endl;
}
};
int main(){
Rectangle *r1=new Rectangle();
cout<<r1->l<<" "<<r1->b<<endl;
delete r1;//Delete keyboard we can only use for pointer variable.R1 is pointer variable.
Rectangle r2(3,4);
cout<<r2.l<<" "<<r2.b<<endl;

Rectangle r3=r2;
cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}
/*
OP:

0 0
Destructor is called
3 4
3 4
Destructor is called
Destructor is called

*/