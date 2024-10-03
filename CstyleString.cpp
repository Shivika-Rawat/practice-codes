
#include<iostream>
using namespace std;
int main(){
    char s1[]="gfg";  // '\0' is automatically appended
    char s2[]={'c','p','p','\0'}; // \0 is must for a char arr \0 is also called string Terminator and has askii value zero. 
    cout<<string(s1)<<endl;
    cout<<string(s2)<<endl;
}