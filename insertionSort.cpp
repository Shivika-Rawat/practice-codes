//Time and space complexity:O(n^2), O(1)
//It is stable sorting algorithm.

#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=01;i<n;i++){
        int currELe=v[i];
        //Find the correct position for our Current element.
        int j=i-1;
        while(j>=0 && v[j]>currELe){
            v[j+1]=v[j];
            j--;
        }
        //Insert current element?
        v[j+1]=currELe;
    }
return;
}

int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
insertionSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

    return 0;
}
//Repeatedly, the elements from unsorted subarray and insert in sorted subarray.