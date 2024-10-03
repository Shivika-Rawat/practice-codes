//Object of a class std::string in C. It is used to represent sequence of characters
//A string is a class
//String variables => Objects of this class, No. pre-alocated memory.String class have inbuilt functions.
//It is an array of character data type. where in char  " char array_name[size];"  and Static memory allocation.Unallocated memory will be wasted. Faster than our strings.
//
/*Commonly used inbuilt functions
1. reverse() =>Riverside spring from starting pointer to end pointer. Ex: reverse(ptr1, ptr2);  or 
reverse(str.begin(),str.end()); TC:O(Length of string)
2. substr() => To find substring of a given string , substr(position, length), TC:O(length)
3.The "+" operator => Use to concatenate strings.
4. strcat() =>It is used to concatenate character arrays.
5.push_back() =>Insert character at the end of the string.
6. size() =>used to know the size of a string
7. to_string =>used to convert integer value to string .
*/
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    // string str="My name is:";
    // string str1("Sonali Rawat");
    // cout<<str<<" "<<str1<<endl;


/*
    string str;
    // cin>>str;
    getline(cin,str);
    cout<<str<<endl;
    
*/

// char ch='a';
// cout<<int(ch)<<endl;//ASCII print hogi

string str="Universities";
reverse(str.begin(),str.end());
cout<<str<<endl;
cout<<str.substr(1,4)<<endl;//index and length provide     //eiti
cout<<str.substr(1)<<endl;//index provide       // eitisrevinU
string str1="Colleges";
string str2=" in India";
// str1+=str2;//String two is getting appended after string one.
// str1=str1+str2;//Copy string created for string one And then String one is added with string one. That's how these two things are different from each other
cout<<str1+str2<<endl;

char s1[8]="Sonali";
char s2[8]=" Rawat";
cout<<strcat(s1,s2)<<endl;//Appended string two after string one

string s="abcd";
char ch='e';
s.push_back(ch);
cout<<s<<endl;

return 0;


}