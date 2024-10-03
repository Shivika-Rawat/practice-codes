#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    //a is prime
    cout<<prime(a)<<endl;
    //a factorial;
    cout<<fact(a)<<endl;
    //b is prime
    cout<<prime(b)<<endl;
    //b factorial;
    cout<<fact(b)<<endl;
    //b-a is prime
    cout<<prime(b-a)<<endl;
    //b-a factorial;
    cout<<fact(b-a)<<endl;
    return 0;
}