//Weak pointers are used for shared pointer objects. So if you create an object with shared pointer, and if you have a shared pointer for that object, and if you don't want ownership of that object, if you don't want to increase reference count for that object, you can create one more weak pointer to that object. The purpose is, sometimes you want to create some temporary pointers You don't care whether the object pointed by them is deleted or not. You just want to create some temporary pointers and use them. You don't want to increase reference count when you're creating a temporary pointer. You use weak pointer for those purpose. Let's take a look at this example

//weak pointers do not have any function like big weak, because they only bound to an existing object. They don't own any object. So you have some objects which are owned by a shared pointer. You just access the same object using V pointer without increasing its reference form. That's the simple idea. 
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
        cout<<p1.use_count()<<endl;
    }
    cout<<p1.expired()<<endl;//true //return true If the object is deallocated ,if object is not deallocated, it will return false
    cout<<"Main end \n";
    return 0;
}