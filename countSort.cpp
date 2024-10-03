//

#include<bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v)
{
    int n=v.size();
    //find the max ele
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        max_ele=max(v[i],max_ele);
    }
    //create the freq array
    vector<int>freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    //calculate cumulative freq
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }
    vector<int>ans(n);
    //calculate the sorted arr
    for(int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];

    }
//copy back the ans arr to original arr
for(int i=0;i<n;i++){
    v[i]=ans[i];
}

}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    countSort(a);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//TC:O(n), where max ele is in order of n or 2n, 3n ... but not in n^2 or n^3
//SC: O(n+k)
//we prefer count sort when we have repeated elements and and where max ele is comparable with no of ele's
//we can't use count sort where floating no's comes in execution
//if we want to use count sort in -ve no's we have to make few changes in algorithm.where we have to normalize the elements of arr
//bigger -ve no ko sare array m subtract kar dnege then sort ke baad sabme same -ve no ko add kar denge
//if the no's are not comparable in arr , then we also can't use count sort.