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
    shared_ptr<Test>p1;
    {
        shared_ptr<Test>p2=make_shared<Test>(10);
        p1=p2;
    }
    cout<<"Main end \n";
    return 0;
}
//About Sharepoint, which allows multiple share pointers to own an object. But it also involves overhead. So in general, if you can use a unique pointer, it's better to use the unique pointer than shared pointer, because there is most extra overhead involved for reference counting. Let us now talk about weak pointers