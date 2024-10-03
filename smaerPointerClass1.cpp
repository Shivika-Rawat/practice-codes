#include<iostream>
using namespace std;
//Core without a smart pointer.
class Test{
    public:
    int x,y;
    Test(int a=0,int b=0){
        x=a;
        y=b;
        cout<<"Constructor called"<<endl;
    }
    ~Test(){
        cout<<"Destructor called"<<endl;
    }
};
class SP{
    Test *ptr;
    public:
    SP(Test *p=NULL){ptr=p;}
   ~ SP(){delete ptr;}
   Test &operator*(){ return *ptr;}
   Test *operator ->(){ return ptr;}
   
};
int main(){
    cout<<"Main begin \n";
    {
        SP sp(new Test(10,20));
    }
    cout<<"Main ends";
    return 0;
}