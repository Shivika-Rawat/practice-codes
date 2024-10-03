//Shared pointer examplemultiple shared pointers can own same object
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
    cout<<"Main begins\n";
    
    //    shared_ptr<Test>ptr=make_unique<Test>(10);  //Older version
        shared_ptr<Test>ptr1(new Test(10));
        shared_ptr<Test>ptr2=ptr1;
        
    cout<<ptr1.use_count()<<endl;
    cout<<ptr2.use_count()<<endl;
    cout<<"Main ends \n";
    return 0;
}