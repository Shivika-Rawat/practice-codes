//Time, and space complexity:O(n^2), O(1)
//Unstable sorting algorithm
#include<bits/stdc++.h>9
using namespace std;
void selectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        //Finding minimum element in unsorted array.
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx]){
                min_idx=j;
            }
        }
        //Placing minimum element at beginning.
       if(i!=min_idx)
        swap(v[i],v[min_idx]);
    }
return;
}


int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
selectionSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}cout<<endl;

    return 0;
}
//We repeatedly find the?minimum element in the unsorted array and put it at beginning of unsorted array