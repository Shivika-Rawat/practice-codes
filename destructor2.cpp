#include<bits/stdc++.h>
using namespace std;
class  Test{
    int x;
    public:
    Test (int i):x(i){
        cout<<"construct:"<<x<<endl;
    }
    ~Test (){
        cout<<"Destruct:"<<x<<endl;
    }
};

int main(){
   Test t1(10);
   Test t2(20);
    return 0;
}
/*
construct:10
construct:20
Destruct:20
Destruct:10

*/