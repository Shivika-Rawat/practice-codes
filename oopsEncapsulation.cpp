//Eight capsulation is binding of methods and variables together into a single unit or class.Data is only accessible from the class methods.
//Also leads to data abstraction or hiding.Iski Wajah se classo abstract data type bola jaga hai.
#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main(){
    abc ob;
    ob.set(3);
    cout<<ob.get()<<endl;
    return 0;
}