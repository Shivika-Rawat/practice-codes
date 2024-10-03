//So we're given a string. We need to. check whether this thing is pangram or not. A string is called pangram. If it contains all the characters from A to Z, these characters might appear either as a lower case or as an upper case. 
/*
ip:str="The Quick Brown Fox jumps over the lazy dog".
op:yes

ip:str="abc xyz pqr"
op: no

*/
#include<bits/stdc++.h>
using namespace std;
//Naive sol:


// function that takes a string as an argument. It returns true  if the given string is pangram otherwise it returns false. A naive pollution to solve this problem is to search all the charactors 1 by 1. I search for small a and capital A. Then if I find it, I then search for B and C for D......... So I'll traverse the strings like 26 times. now.Can you think of an approach that traverses the string only once and gives you the answer?


//Efficient solution
bool inPangram (const string &s){
    int n=s.length();
    if(n<26)
    return false;
    bool visited[26]={0};
    for(int i=0;i<n;i++){
        char x=s[i];
        if(x>='a' && x<='z')
        visited[x-'a']=true;
        if(x>='A' && x<='Z')
        visited[x-'A']=true;
        for(int i=0;i<26;i++)
            if(visited[i]==false)
            return false;
    }
    return true;
    // Tc:O(n)
}