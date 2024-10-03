//Given two strings s and T return true if T is an anagram(rearranging letters of words to get another word) of S and falls otherwise
//Constraints:String S and T will only contain lower case alphabetical character.
/*ex:
i/p: s="anagram";
t="nagaram";
o/p: yes
*/

//TC: O(Length of a string)
//SC:O(26)  or O(1)
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2){
    //Create frequency array
    vector<int>freq(26,0);
    //If lengths are different for s1 and s2, then return false.
    if(s1.length()!=s2.length()) return false;

    //Store frequency of characters in S1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;//for s1 we are incrementing frequency of character
        freq[s2[i]-'a']--;//for s2 we are decrementing frequency of character
    }
    //Checking if frequency of every character is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){//not anagram extra char hai
        return false;

        }
    }
    return true;
}
int main(){
string s1,s2;
cin>>s1>>s2;

if(isAnagram(s1,s2)){
    cout<<"Strings are anagrams";
}
else{
    cout<<"Strings are not anagrams";
}
    return 0;
}