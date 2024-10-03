#include<iostream>
#include<vector>
#include<string>
using namespace std;
//TC:O(Length of string)
//SC:O(26) or O(1)
string countSort(string str){
    vector<int>freq(26,0);
    //storing frequency of every character in a string.
    for(int i=0;i<str.length();i++){
        int idx=str[i]-'a';
        freq[idx]++;

    }
    //Create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str;

}

int main(){
    string str;
    cin>>str;
    cout<<countSort(str)<<endl;
}