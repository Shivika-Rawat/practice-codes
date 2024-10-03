#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>&str){
    //Keeping first string as constant and compare it with all other strings
    string s1=str[0];
    int ans_len=s1.size();
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<s1.size() and j<str[i].size() and s1[j]==str[i][j])//Finding the common prefix spring length.
            j++;
            ans_len=min(ans_len,j);//Updating length of answer spring.
        
    }
    string ans=s1.substr(0,ans_len);
    return ans;

}

int main(){
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