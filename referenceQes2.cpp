#include<bits/stdc++.h>
using namespace std;
 int &fun(){
        static int x=10;
        return x;

    }
int main(){
   int &z=fun();
   cout<<fun()<<" ";
   z=30;
   cout<<fun();
    return 0;
}

/*
References in c++


create an alias
must be assigned when declared
cannot be null
safer 
easier to use

*/