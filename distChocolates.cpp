//Search element in rotated sorted array with duplicate elements return one if the element is found else return 0.

#include<bits/stdc++.h>
using namespace std;
bool canDistChoco(vector<int> &arr,int mid,int s){
    int n=arr.size();
    int studentReq=1;
    int currSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(currSum+arr[i]>mid){
            studentReq++;
            currSum=arr[i];
            if(studentReq>s) return false;
        }
        else{
            currSum+=arr[i];
        }
    }
    return true;
}

int distChoco(vector<int> &arr,int s){
    int n=arr.size();
    int lo=arr[0];
    int hi=0;
    for(int i=0;i<arr.size();i++){
        hi+=arr[i];
    }
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(canDistChoco(arr,mid,s)){
            ans=mid;
            hi=mid-1;

        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;//4
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);//12 34 67 90
    }
    int s;
    cin>>s;//2
    cout<<distChoco(v,s)<<endl;

    return 0;
}
//Output:   113

//TC: n logn
