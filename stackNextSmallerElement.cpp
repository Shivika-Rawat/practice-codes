#include<iostream>
#include<stack>
#include<vector>
using namespace std;
/*
ipArr: 4 3 9 1 6 8 2 7 5 3
opArr: 3 1 1 -1 2 2 -1 5 3 -1 

ipArr: 4 6 3 1 0  9 5 6  7  3 
opArr: 3 3 1 0 -1 5 3 3 3 -1 
*/
//Tc:O(n)  Sc:O(n)
vector<int> nextSmallerElement(vector<int>&arr){
    int n=arr.size();
    vector<int>output(n,-1);//put -1 In all the indexes.
    stack<int>st;//indexes
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i] < arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (not st.empty())//This while Loop is not mandatory because we already check for -1 at the top of fun
    {
        output[st.top()]=-1;
        st.pop();
    }
    
  return output;  
}

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
    vector<int>res=nextSmallerElement(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}