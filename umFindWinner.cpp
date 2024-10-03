/*Winner of the election  //return max cnt //If there are many winners with same frequency, then we choose lexicographically smaller
ip: a[]="abc","xyz","abc","pqr"
op: abc
*/
#include<bits/stdc++.h>
using namespace std;

string findWinner(string arr[],int n){
    unordered_map<string,int >m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    int maxFreq=0;
    string winner;
    for(auto x:m){
        if(x.second>maxFreq){
            maxFreq=x.second;
            winner=x.first;
        }
        else if(x.second==maxFreq and x.first<winner)
        winner=x.first;
    }
    return winner;
}//TC:O(n *maxlen)
int main(){
    string arr[]={"abc","xyz","abc","pqr","xyz"};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findWinner(arr,n);//abc
    return 0;
}