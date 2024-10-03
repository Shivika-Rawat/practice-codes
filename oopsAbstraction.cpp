//Abstraction enabled us to display only essential information while hiding.Like implementation details..
//Through inheritance A class inherits properties of another class..
#include<iostream>
using namespace std;
class Parent{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class child:public Parent{
    
};
int main(){

Parent p;

    return 0;
}
