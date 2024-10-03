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
int main(){
    cout<<"Main begin \n";
    {
        Test *p=new Test(10,20);
    }
    cout<<"Main ends";
    return 0;
}