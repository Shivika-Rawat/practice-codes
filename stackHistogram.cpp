//Given an array of integer heights representing the histograms bar height, where the width of each bar is one, return the area of the largest rectangle in the histogram..
#include<bits/stdc++.h>
using namespace std;

int histogram(vector<int>&arr){
    int n=arr.size();
    stack<int>st;//indexes
    int ans=INT_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i] < arr[st.top()]){
            int el=arr[st.top()];//Current bar to be removed and whose answer will be calculated
             st.pop();
            int nsi=i;
            int psi=(st.empty()) ? (-1) : st.top();
            ans=max(ans,el*(nsi-psi-1));
           
        }
        st.push(i);
    }
    while (not st.empty())
    {
        int el=arr[st.top()];
        st.pop();
        int nsi=n;
        int psi=(st.empty())? (-1):st.top();
        ans=max(ans,el*(nsi-psi-1));
    }
    

  return ans;  
}
//Tc:O(n)    sc:O(n)
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while (n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=histogram(v);
    cout<<ans<<endl;
    return 0;
}