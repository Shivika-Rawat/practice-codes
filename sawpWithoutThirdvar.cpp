#include<iostream>
using namespace std;
int Swap(int &a,int &b){
a=a^b;
b=a^b;
a=a^b;
return a,b;
}
int Swapp(int &a,int &b){
a=a+b;  //6+7=13 -7=6   
b=a-b;
a=a-b;
return a,b;
}

int main(){
    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    Swapp(a,b);
    cout<<a<<" "<<b;
    return 0;
}