#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr){
    int ans=0;
    for(int  i=0;i<arr.size();i++ ){
        ans=ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans=ans^1;
    }
return ans;
}
int main(){
    vector<int> v={4,2,1,3,1,5,9};
  int n=  findDuplicate(v);
  cout<<n;
    
} 