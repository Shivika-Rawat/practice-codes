//Unique pointer shared pointer and weak pointer,All these three pointers are stored in memory header file
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
};//Uni pointer automatically free memory
int main(){
    cout<<"Main begins\n";
    {
        // unique_ptr<Test>ptr=make_unique<Test>(10);  //Older version
        unique_ptr<Test>ptr(new Test(10));
        ptr->fun();
    }
    cout<<"Main ends \n";
    return 0;
}

// int main(){
//     unique_ptr<Test>ptr1=make_pair<Test>(10);
//     unique_ptr<Test>ptr2=ptr1;  


//If you have an object, Ideally There should be only one unit ptr pointed to this. And that is the reason we cannot assign a unique pointer to other pointer, right? So the functions like copy constructor assignment operator they are not there The unique pointer class. So if you try to do something like this, you will get a compilor error
//The reason for this is Unique pointer works the way we have discussed our own smart pointer representation in the previous C video. They are simple pointers. Once you create a unique pointer distance, and as soon as resistance goes out of the score, it simply calls the destructor of that particular pointer. And if you have multiple other pointers pointing to the object, then there would be problems, because the memory allocated by those pointers would be deletedThat's why unique pointers should all will be used in a way that they want to all object and no other pointer or reference should be there for that particular object. And that's why they could not allow this copying a structure and assignment operator to be used in the detail. These functions are deleted inside the unique pointer class
//The good thing about unique pointer is it is, it causes very less overhead. It is a very simple pointer. You create a unique pointer for a allocation construction of object. And as soon as it goes out of the scope, it destructs object. It does not maintain any other additional operation.

//Pointer share pointer allows multiple share pointers to refer to the same locationAnd that is implemented by maintaining extra overhead, like reference count to that particular locationIn unique pointer, if you wish to transfer this objects ownership from ptr 1 to pdr 2 you don't want to maintain pdr 1 to this location anymore. And you want ptr to maintain this location, that is a function called move. So assignment is not allowed, but we can call who function. So when you call move function, the ownership of the objectfrom pdr 1 is transferred to pdr 2. Now pdr owns this object

//     unique_ptr<Test>ptr2=move(ptr1);  

//     return 0;
// }