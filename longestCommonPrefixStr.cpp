#include<bits/stdc++.h>
using namespace std;

//TC:O(n log n*m)
//SC:O(1)
string longestCommonPrefix(vector<string> &str){
    //Sorting the array of strings
    sort(str.begin(),str.end());
    string s1=str[0];//first string
    int i=0;
    string s2=str[str.size()-1];//last string
    int j=0;
    string ans="";
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++; j++;
        }
        else{
            break;
        }
    }
return ans;
}
int main(){
//Sort the string array and then compare the first and last string and those words are same in last and first thing that will be the longestcommon prefix string
int n;
cout<<"Enter number of strings:";
cin>>n;
cout<<"Enter strings:";
vector<string>str(n);
for(int i=0;i<n;i++){
    cin>>str[i];
}
cout<<"Longest common prefix:"<<longestCommonPrefix(str)<<endl;



    return 0;
}