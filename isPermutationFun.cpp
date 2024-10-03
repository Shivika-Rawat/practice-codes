//IsPermutation function.is used to check whether given two containers are permutations of each other, not so when we say permutations of each other, it means they have the same set of ions. The arrangement or order of items may be different. 
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //Four permutations both the vectors have same elements and same number of elements.They can be in different order.
    vector<int>v1={10,20,30,5}; 
    vector<int>v2={20,10,5,30}; 
    if(is_permutation(v1.begin(),v1.end(),v2.begin()))
    cout<<"Yes.";//yes
    else
    cout<<"No.";
    vector<int>v3={10,20,30,5,20}; 
    vector<int>v4={20,10,5,30,5}; 
    if(is_permutation(v3.begin(),v3.end(),v4.begin()))
    cout<<"Yes.";
    else
    cout<<"No.";//no

    int arr1[]={10,20,30}; 
    int arr2[]={20,30,10}; 
    if(is_permutation(arr1,arr1+3,arr2))
    cout<<"Yes.";//yes
    else
    cout<<"No.";
    return 0;
}
