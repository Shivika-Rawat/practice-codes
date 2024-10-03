#include<iostream>
using namespace std;
int average(int arr[],int n) throw(string){//So I'm modified the function written here. I have added here throw stringthrough keyword has one more application. We use it to throw an exception. We also use it with function declaration. When we use pro keyword with function declaration, it is used to specify what all exceptions can be thrown by this function. In this program, this function throws a string exception. Anddoes not catch it. So we can tell in the function declaration that this function might throw a string exception. And if we are using this function, it is a good idea to handle this exception. This is an offhill thing in C++. If you do not write through string, then also it will compile. If you write through string, then also it will compile.words in good practice to specify the exceptions that a function might throw in the function declaration. So that if somebody is going through the header file or where in the documentation of your function, if a function proves multiple data types as exceptions, like if a function throws string data diabetes exception, integer as an exception, we can.write all those multiple data types as, separated values.
    if(n==0)
    throw string ("Array Size is Zero");
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];

    return sum/n;
}
int main(){
    int arr[]={4,5,2};
    int n=0;
    try{
        int res=average(arr,n);
        cout<<res;
    }
    catch (string &e){
        cout<<e;
    }
    
    cout<<"\n bye.....";

    return 0;

}