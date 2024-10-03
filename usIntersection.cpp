/*
ip: a[]:10,15,20,25,30,50
    b[]:30,5,15,80
op:15 30

ip: a[]:10,20
    b[]:20,30
op:20

ip: a[]:10,20,30
    b[]:30,20,10
op:10,20,30
*///Naive sol
//You can try two variations of this problem. The first variation is you can print common elements in any order. And the 2nd variation is, you need to print the common elements as they appear the 1st array.
#include<bits/stdc++.h>
using namespace std;
//TC:O(n^2)
void intersection(int a[],int m,int b[],int n){
    for(int i=0;i<m;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                flag =true;
                break;
            }
        }
        if(flag==true)
        cout<<a[i]<<" ";
    }
}
int main(){
int a[]={10,15,20,25,30,50};
int m=sizeof(a)/sizeof(a[0]);
int b[]={30,5,15,80};
int n=sizeof(b)/sizeof(b[0]);

intersection(a,m,b,n);//15 30
    return 0;
}