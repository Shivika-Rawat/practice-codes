#include<bits/stdc++.h>
using namespace std;
void fun(int &x){
    x+=5;

}
int main(){
    int x=10;
    fun(x);
    cout<<x<<" ";//10
    return 0;
}

//Both issues are related with references 
//we may resolve with pointers also, but references are easier to use.