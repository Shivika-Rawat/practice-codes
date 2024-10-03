//Key one a number and find the sum of natural number till N, but with alternate signs
//ex: if n=5;   1-2+3-4+5=3

#include<iostream>
using namespace std;
int  f(int n){
   if(n==0) return 0; 

return f(n-1)+((n%2==0)?(-n):(n));
}

int main()
{
    cout<<f(9);
        
return 0;
}