// Changing og function
#include<iostream>
using namespace std;
class Point
{
    int x,y;
    public:
    Point(int x, int y){
        this->x=x;
        this->y=y;
    }Point &setx(int x){
        this->x=x;
        return *this;
    }

    Point &sety(int y){
        this->y=y;
        return *this;
    }
};

int main(){
    Point p1(10,10);
    p1.setx(5).sety(5);//chaining

    return 0;

}
//This pointer is a constant pointer.So if we try to change this pointer, we will get compiler error.
//Advantages of this pointer
//1. You can use this pointer by yourself to Make perimeter name more meaningful. 
//2. You can chain functions.
