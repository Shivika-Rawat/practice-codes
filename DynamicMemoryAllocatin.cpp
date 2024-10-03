/*
----------
-  stack  -
----------
-  heap   -
----------
-  data   -  //Static ,global.
----------
-  text   -
- or code - //Executable code.
----------
*/
#include<iostream>
using namespace std;
int e;
void fun(){
    static int a;//static
    int b,c;//auto
}
int main(){
    int d;//auto
    fun();
    int *ptr=new int[5];
    return 0;
}


int main(){
    static int a;//static
    int b,c;//auto
    int *ptr=new int[5];//It allocates a array of memory.
    return 0;
}
