#include<bits/stdc++.h>
using namespace std;
void printSortedWithIndexes(int arr[], int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    v.push_back({arr[i],i}); //or     make_pair(arr[i],i);          we can also use it
    
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
int arr[]={20,10,5,40};
int n=4;
printSortedWithIndexes(arr,n);

    return 0;
}
/*Output
TC:O(n logn)
sc:O(n)
5 2
10 1
20 0
40 3

*/