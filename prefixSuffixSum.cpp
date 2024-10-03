//check if we can partition the array into two subarrays with equal sum. More Formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

#include<bits/stdc++.h>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v){
    int totalSum=0;
    for(int i=0;i<v.size();i++){
        totalSum+=v[i];
    }
    int prefixSum=0;
    for(int i=0;i<v.size();i++){
        prefixSum+=v[i];

        int suffixSum=totalSum-prefixSum;

        if(suffixSum==prefixSum){
            return true;
        }
    }
    return false;
}
int main(){
 int n;
 cin>>n;
 vector<int> v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}    

cout<<checkPrefixSuffixSum(v);
cout<<endl;


return 0;

 }