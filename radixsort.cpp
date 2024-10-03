//TC:O(d*(n+k)) or O(d*(n)),SC:O(d*(n))
#include<bits/stdc++.h>
using namespace std;

void CountSort(vector<int>&v, int pos){
    int n=v.size();
    //create freq arr
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    //cumulative freq

    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    //ans arra
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
      ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}

void radixSort(vector<int> &v){
    int maxELe=INT_MIN;
    for(auto x:v){
        maxELe=max(x,maxELe);

    }
    for(int pos=1;maxELe/pos>0;pos*=10){
        CountSort(v,pos);
    }
}

int main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
radixSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

    return 0;
}
//