//An encoded spring is given and the task is to decode it. The encoding pattern is that the occurrence of the string is given at the starting of the string, and each string is enclosed by square brackets.
/* i/p: 3[b2[ca]]
o/p:   3[bcaca] =>   bcacabcacabcaca
*/

/*for( i=0-------s.len)
if(s[i]!=']')
insert into res
else
extract str from res(till opening bract '[' found)
reverse str
remove the last cahr '[' this
etract digit /num from res
till s[i]>= '0'  && <='9'
reverse num
convert numString to int using ,  int_num=stoi(num)
insert str in res , int_num times

repeat same process again
*/
#include<bits/stdc++.h>
using namespace std;
string decodedString(string s){
    string res="";
    //traversing the encoded string
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            res.push_back(s[i]);
        }
        else{
            //Extract str from res
            string str="";
            while(!res.empty() and res.back() !='['){
                str.push_back(res.back());
                res.pop_back();
            }
            //reverse the str
            reverse(str.begin(),str.end());
            //remove last char from res which is [
                res.pop_back();
                //extract num from res
                string num="";
                while(!res.empty() and (res.back()>='0' and res.back()<='9')){
                    num.push_back(res.back());
                    res.pop_back();
                }
                //reversing the num string
                reverse(num.begin(),num.end());
                //convert string to int
                int int_num = stoi(num);
                //inserting str in res int_num times
                while(int_num){
                    res+=str;
                    int_num--;
                }
        }
    }
    return res;
}

int main(){
string str;
cin>>str;
cout<<decodedString(str)<<endl;
    return 0;
}

//TC: O(n)   n is a length of a decoded string
//sc: O(n)  n is a length of a decoded string
/*
op: 3[b2[ca]]
bcacabcacabcaca

1[a2[b3[cd]]]
abcdcdcdbcdcdcd

*/
