//Fractional knapsack problem.O(n log n)
#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<int,int>a,pair<int,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;
}
double knapsack(int w,pair<int,int>arr[],int n){
    sort(arr,arr+n,myCmp);
    double res=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=w){
            res+=arr[i].first;
            w=w-arr[i].second;
        }
        else{
            res+=arr[i].first*((double)w/arr[i].second);
            break;
        }
    }
    return res;
}
int main(){
pair<int,int>arr[]={{120,30},{100,20},{60,10}};
int n=3;
int w=50;
cout<<knapsack(w,arr,n);//240               //i=2, res=160+(20/30 *120)=240

    return 0;
}