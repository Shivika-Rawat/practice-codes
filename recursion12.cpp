//Given two numbers X and Y, find the greatest divisor of X and Y using recursion..

#include<iostream>
using namespace std;
//Euclid's Algo
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;//base case
    return gcd(b,a%b);
}

int main(){

cout<<gcd(40,48);
return 0;
}

