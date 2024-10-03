//given a binary str and an integer k, return the maximum no of consecutive 1's in the string if you can flip at most k 0's 
//i/p: "0001101011" , k=2
//o/p:7
#include<bits/stdc++.h>
using namespace std;
int longestOnes(string str, int k){
    int start= 0;
    int end=0;
    int zero_count=0;
    int max_len=0;
    for(;end<str.length();end++){
        if(str[end]=='0'){
            zero_count++;
        }
        while(zero_count>k){
            if(str[start]=='0') zero_count--;
            start++;//counting our window
        }
        //if  zero_count <=k
        max_len=max(max_len,end-start+1);
    }
    return max_len;

}

int main(){
string str;
cout<<"Enter the binary string:";
cin>>str;
int k;
cout<<"Enter max flips:";
cin>>k;
cout<<longestOnes(str,k)<<endl;

    return 0;
}
/*
TC:O(n)   n is the len of input str
SC:O(1)

OP:Enter the binary string:0001101011
Enter max flips:2
7
*/