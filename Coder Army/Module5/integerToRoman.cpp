#include<bits/stdc++.h>
using namespace std;

// 1248=1000+200+40+8  == M+CC+XL+VIII ==MCCXLVIII
// /523=500+20+3  == D+XX+III ==DXXIII


int num(char c){

}
int romanToInt(string s){
    int sum=0, index=0;
    while(index<s.size()-1){
        if(num(s[index])<num(s[index+1]))
        sum-=num(s[index]);
        else  sum+=num(s[index]);
        index++;
    }
    sum+=num(s[index]);
    return sum;
}

int main(){
string s="XCCVIII";
cout<<romanToInt(s);

}