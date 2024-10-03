//Recursive Binary search implementation.
/* TC:O(log n)
sc:O(log n)

*/

#include<bits/stdc++.h>
using namespace std;

int bsRecursive(vector<int>&input, int target, int lo,int hi){
    if(lo>hi) return -1;
int mid=lo+(hi-lo)/2;//modified mid to tackel overflow
if(input[mid]==target) return mid;
if(input[mid]<target){
    return bsRecursive(input,target,mid+1,hi);
}
else{
    return bsRecursive(input,target,lo,mid-1);
}

}
int main(){
int n;
cin>>n;
vector<int>input;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    input.push_back(x);
    }

int target;
cin>>target;
cout<<bsRecursive(input,target,0,n-1)<<endl;

    return 0;
}