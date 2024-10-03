

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>input,int target){
    //define search space
    int lo=0;
    int hi=input.size()-1;
    while(lo<=hi){
        //calc mid point
        int mid=(lo+hi)/2;
        if(input[mid]==target) return mid;
        else if(input[mid]<target){
            //discard the left of mid
            lo=mid+1;

        }
        else{
            //disard the right  of mid
            hi=mid-1;
        }

    }
    return-1;
}
int main(){
vector<int>input {2,4,5,7,15,24,45,50};
int target=15;
cout<<binarySearch(input,target)<<endl;


    return 0;
}
//Tc:O(log n)
//sc:O(1)