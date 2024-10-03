//Armstrong no:Is a number if the son of every digit in that number raised to the power of total digit in that number is equal to the number.
#include<iostream>
using namespace std;
int powerfun(int p,int q){
    //base case 
    if(q==0) return 1;
    //even case
    if(q%2==0){
        int res=powerfun(p,q/2);
        return res*res;
    }
    //odd case
    else{
        int res=powerfun(p,(q-1)/2);
          return p*res*res;
    }
  
}

int f(int n, int d){
    //base case
    if(n==0) return 0;
    return powerfun(n%10,d)+f(n/10,d);

}
int main(){
int n;
cin>>n;
int noOfDigits=0;
int temp=n;
while(temp>0){
    temp=temp/10;
    noOfDigits++;
}
int res=f(n,noOfDigits);
if(res==n){
    cout<<"Yes";
}
else{
    cout<<"No";
}

    return 0;
}                                                                                                                                                                                                                                                      