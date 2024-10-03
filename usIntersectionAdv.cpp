//Efficient solution
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int m,int b[],int n){
    unordered_set<int>s;
    for(int j=0;j<n;j++)
       s.insert(b[j]);

        for(int i=0;i<m;i++)
        if(s.find(a[i])!=s.end())
        cout<<a[i]<<" ";
    
}//tc:O(n+m)  sc:O(n)
int main(){
int a[]={10,15,20,25,30,50};
int m=sizeof(a)/sizeof(a[0]);
int b[]={30,5,15,80};
int n=sizeof(b)/sizeof(b[0]);

intersection(a,m,b,n);//15 30
    return 0;
}