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
};
int main(){
Rectangle r1;
cout<<r1.l<<" "<<r1.b<<endl;

Rectangle r2(3,4);
cout<<r2.l<<" "<<r2.b<<endl;

Rectangle r3=r2;
cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}