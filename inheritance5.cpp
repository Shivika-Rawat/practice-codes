#include<iostream> 
using namespace std;
class Base{
    public:
    int x;
    public:
    Base(int a):x(a){
        cout<<"Base in....."<<endl;
    }
};
class Derived:private Base
{
    private:
    int y;
    public:
    Derived (int a,int b):Base(a),y(b){
        cout<<"Derived in........."<<endl;//getCompilerError
    }
    void print(){
        cout<<x<<" "<<y<<endl;//getCompilerError
    }
};

int main(){
    Derived d(10,20);
    d.print();
    cout<<d.x;//getCompilerError
    return 0;
}