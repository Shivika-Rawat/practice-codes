// Searching in sorted array.Given an array of integer a that is sorted in non decreasing order, find the first and last position of the given target element in the sorted array. Follow 0 based indexing.
// If Target is not found in the array, return [-1,-1]

//TC:O(log n)
#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &input, int target)
{ //first index > target
    int lo = 0, hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
       if (input[mid] > target)
        {
            ans=mid;
            hi = mid - 1;//discard right
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int lowerBound(vector<int> &input, int target)
{ // first index>=target
    int lo = 0, hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] >= target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
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
 vector<int>result;
int lb=lowerBound(input, target);
if(input[lb]!=target){
   result.push_back(-1);
   result.push_back(-1);
}
else{
    int ub=upperBound(input,target);
    result.push_back(lb);
    result.push_back(ub-1);
    
}
cout<<result[0]<<" "<<result[1]<<endl;


    return 0;
}