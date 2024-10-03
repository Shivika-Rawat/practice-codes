//Print k multiples of Num
#include<iostream>
using namespace std;
void f(int num, int k){
    if(k==0) return;
    f(num,k-1);//The function correctly prints the first K-1 multiples
    cout<<(num*k)<<" ";

}


int main(){
f(8,5);

    return 0;
}