// we'll talk about built-in popcorn function. Built in popcorn function takes an integer as an argument, and it counts how many set bits it has in its binary representation. Please note that this function is a gcc specific function, not a   C++ standard function. So you will not find it in other compilers. But gcc compiler is the most used compiler, and most of the online IDEs, they also use Gcc. So the program that you write in any competitive environment, and if you use built in pop count, it's most likely going to work. 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<__builtin_popcount(n)<<endl;
   //2    //Because five has two set bits in its binary representation.   000000.....1001 so these has 28 zeros and thse 4 bits (1001)at last

    //8 has nly 1 set bit
//builtin_popcount fun takes Unsigned int as an argument. So if you pass a negative number to it, what it's going to do? Your negative number is first going to be converted into unsigned int and then it's going to count. These set bits in this unsigned inter presentation. How negative two unsigned number conversion happened in C++. typically we use two's complement representation. And binary reperesentation the bit pattern of negative numbers is copied exactly into the unsigned numbers and generally what happens is very small negative numbers. They become large positive numbers because in negative numbers we have the leading bit as 1. 
long int m=7;
cout<<__builtin_popcount(m);


 return 0;
}
//There are Two variations of built in pop count function.
/*
1.  __builtin_popcountl(): built in popcorn L function is used to count set bits in an unsigned long integer 
2.  __builtin_popcountll():builtin_popcountll Function.is used to count set bits and unsigned long, long integer.

*/