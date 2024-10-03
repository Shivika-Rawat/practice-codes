//How to optimise the bubble shot in the case of nearly sorted arrays.
//Bubble sort is a stable algo.Order of element with same value are not disturbed.
//Repeatedly sop to adjacent element of in wrong order.
#include<iostream>
#include<vector>
using namespace std;
void  bubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int flag=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return;n
}
int main(){
int n;
cin>>n;

vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
bubbleSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}
    cout<<endl;
    return 0;
}