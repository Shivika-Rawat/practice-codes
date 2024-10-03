#include<iostream>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    try{
        if(x==0.0)
        throw 0;
        if(y==0.0)
        throw string ("y is zero");
        if(x+y<0.0)
        throw (x+y);
    }
    catch(int e){ cout<<e;}
    catch(string &s){cout<<s;}
    catch(...){ cout<<"x+y is less than 0";}// if they are really right at the end of all catch blocks. So when you write three dots, it is used to catch all. You generally write at the end of all catch blocks. So if there is a data type which is thrown by a drive block, and if there is no catch block matching with the zelda, like in this example, there is no catch block that matches double data type. this catch block is executed. 
    cout<<"\nBye.......";

    return 0;
}