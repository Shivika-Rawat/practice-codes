#include<bits/stdc++.h>
using namespace std;
class Test{
    int *ptr;
    public:
    Test(int x){
        ptr=new int(x);
    }
  
   Test (const Test &t){//deep copy
    int val=*(t.ptr);
    ptr= new int (val);
   }
   void set(int x){
    *ptr =x;

   }
   void print(){
    cout<<*ptr<<" ";
   }
};
int main(){
    Test t1(10);
    Test t2(t1);    //Test t2=t1;
    t2.set(20);
    t1.print();
    t2.print();


    return 0;
//OP: 10 20
}