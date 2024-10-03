//A rotated, sorted array is a sorted array on which rotation operation has been performed some number of times given a rotated, shorted array, find the index of the minimum element in the array. Follow zero based indexing. It is. guaranteed that all the elements in the array are unique.


//TC:O(log n)
//SC:O(1)


#include<bits/stdc++.h>
using namespace std;
int findMinimumInRotatedSorted(vector<int> &input){
    if(input.size()==1)  return input[0];
    int lo=0,hi=input.size()-1;
    if(input[lo]<input[hi]){
        return lo;
    }
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]>input[mid+1]) return mid+1;
        if(input[mid]< input[mid-1]) return mid;
        if(input[mid]>input[lo]){
            lo=mid+1;

        }else{
            hi=mid-1;
        }
    }
    return -1;

}
int main(){
int n;cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
}

cout<<findMinimumInRotatedSorted(arr);

    return 0;

}