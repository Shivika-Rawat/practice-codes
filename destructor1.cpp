#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    Test(){cout<<"Constructor called"<<endl;}
    ~Test(){cout<<"Destructor called"<<endl;}
};
int main(){
    {Test t1;
    }
    Test t2;
    return 0;
}
//there will be only 1 destructor in a class because we can destroy a obj in 1 ony but can br constructed in multiple ways