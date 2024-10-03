//Find the square root of the given non negative value x. Round it off to the nearest floor integer value.
/*
TC:O(log n)
SC:O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int sqrt(int x){
    int lo=0;
    int hi=x;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid<=x){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }
    return ans;
}
int main(){
    cout<<sqrt(100);


    return 0;
}
