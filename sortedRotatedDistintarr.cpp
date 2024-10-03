//Given the rotated sorted array of integer which contains distinct elements and an integer target, return the index of target if it is in the array otherwise return -1

//TC: O(log n)
//SC: O(1)
#include<bits/stdc++.h>
using namespace std;
int bsSortedRotated(vector<int>&input, int target){
    int lo=0,hi=input.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]==target) return mid;
        if(input[mid]>=input[lo]){
            if(target>=input[lo] and target<= input[mid]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

        }
        else{
            if(target>=input[mid] and target<=input[hi]){
                lo=mid+1;
            } 
            else{

                hi=mid-1;
            }
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
int target;
cin>>target;
cout<<bsSortedRotated(arr,target);

 return 0;
}