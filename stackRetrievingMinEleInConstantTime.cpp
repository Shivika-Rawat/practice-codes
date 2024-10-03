#include<bits/stdc++.h>
using namespace std;
//TC:O(1)       SC:O(1)
#define ll long long int
class MinStack{
    public:
    stack<ll>st;
    ll mm;
    MinStack(){
        this->mm=INT_MIN;
    }
    void push(int val){
        if(this->st.empty()){
            this->mm=val;
            this->mm=val;
            this->st.push(val);
        }
        else{
            this->st.push(val-this->mm);
            if(this->mm >val){
                this->mm=val;
            }
        }
    }
    void pop(){
        if(not this->st.empty()){
            if(this->st.top()>=0){
                this->st.pop();
            }
            else{
                this->mm=this->mm - this->st.top();
                this->st.pop();
            }
        }
    }
    int top(){
        if(this->st.size()==1){
            return this->st.top();
        }
        else if(this->st.top()<0){
            return this->mm;
        }
        else{
            return this->mm=this->st.top();
        }
    }
    int getmin(){
        return this->mm;
    }
};
int main(){
    
    return 0;
}