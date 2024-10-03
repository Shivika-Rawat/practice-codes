//Void pointer:it is a special pointer that can point to any data type value.Voice pointers cannot be dereferenced.So we can typecast it.



#include<iostream>
using namespace std;
int main(){
    float f=10.2;
    int x=10;
    void *ptr=&f;
    ptr=&x;
    // cout<<*ptr; //Error
    int *intptr=(int *)ptr;
    cout<<*intptr<<endl;

    return 0;

}