#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    int *ptr1=arr;
    int (*ptr2)[3]=&arr;//pointer to block of size 3
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    return 0;

}

/*
Note:
  int *p2=&arr;  //would not compile
  int *p2[3];  //would mean an array of pointer of size 3.


*/