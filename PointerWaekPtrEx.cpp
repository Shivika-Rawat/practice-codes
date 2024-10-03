#include<iostream>
#include<memory>
using namespace std;
class Test{
    int x;
    public:
    Test(int a=0){
        x=a;
        cout<<"Constructor \n";
    }
    ~Test(){
        cout<<"Destructor \n";
    }
    fun(){cout<<x<<endl;}
};
int main(){
    weak_ptr<Test>p1;
    {
        shared_ptr<Test>p2=make_shared<Test>(10);
        p1=p2;//Does not increase reference count
        //Lock functionwhich converts weak pointer to a share point. So I can create a shared pointer hereT3. And I can say log P-2 sorry, P 1 P1. And this log function returns a shared pointer corresponding to the object which is being pointed by a weak pointer
        shared_ptr<Test>p3=lock(p1);
    }
    
    return 0;
}
//So weak pointers are used to create temporary pointers, and they are always used with shared pointers. They are used for the object which are owned by a shared pointer. The pointers do not decrease the reference count. We can upgrade weak pointer to a shared pointer using lock function. We can also cheque if the object pointed by AV pointer has been delocated or not using expired function. Here is the more purpose that we pointer served. The purpose is the problem of cyclic dependency with shared pointers. Supposeyou have two classes, A and B, and you have two objects of one object of Class A and 1 object of class b. And Class A is designed in a way that it holds a shared pointer of Class B object. And Class B is designed in a way that it holds a shared point of class object