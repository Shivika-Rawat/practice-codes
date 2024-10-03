#include<iostream>
using namespace std;
class Base{
    protected:
    int x;
    public:
    Base(int a):x(a){
        cout<<"Base in.....";
    }
};
class Derived:public Base
{
    private:
    int y;
    public:
    Derived (int a,int b):Base(a),y(b){
        cout<<"Derived in.........";
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Derived d(10,20);
    d.print();
    return 0;
}