/*Note: we can't do
cahr str[5];
str="gfg";   //in c style string

so we use strcpy() in c-style strings
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[5];
    strcpy(str,"gfg");//if you want to later assign a value
    cout<<str;
    return 0;
}