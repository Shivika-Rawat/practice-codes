//Given a series of N daily prices quotes for a stack, we need to calculate the span of the stacks price for all N days. The span of the stack's price in one day is the maximum number of consecutive day (starting from that day and going backward) for which the stock price was less than or equal to the price of the day.

/*
ip: 100 80 60 70 60 75 85       stock(that particular day or previous day)
op: 1    1  1  2  1  4  6       span

*/
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> PreviousGreaterElement(vector<int>&arr){
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int>output(n,-1);//put -1 In all the indexes.
    stack<int>st;//indexes
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i] > arr[st.top()]){
            output[st.top()]=n-i-1;
            st.pop();
        }
        st.push(i);
    }
    while (not st.empty())//This while Loop is not mandatory because we already check for -1 at the top of fun
    {
        output[st.top()]=-1;
        st.pop();
    }
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());//jab main m vapas jaye to pehle jaise jaye naa ki reversed
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
    vector<int>res=PreviousGreaterElement(v);
    for(int i=0;i<res.size();i++){
        cout<<(i-res[i])<<" ";
    }
    return 0;
}