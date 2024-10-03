#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[10];
    for( i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;

    }

    cout<<"Binary of the given no: ";
    for( i=i-1;i>=0;i--){
        cout<<a[i];
    }
}