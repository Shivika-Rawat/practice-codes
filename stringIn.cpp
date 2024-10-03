//Advantages over C-style strings. 
/*We do not have to worry about size.
Can assign a string later
Support of operators like. <,>,+,==,<=,>=
Richer Library.
Can be converted to C-style strings of needed
*/
#include<iostream>
using namespace std;
int main(){
    string str="geeksforgeeks";
    cout<<str;
    string s1="gfg";
    cout<<s1.length()<<endl;
    s1=s1+"xyz";
    cout<<s1<<endl;
    cout<<s1.substr(1,3)<<endl;
    cout<<s1.find("fg");
    return 0;
}