//Time, and space complexity:O(n logn), O(n)
//Master's theorem:To find the time complexity of divide and conquer algorithms.Where we find time complexity from its reference relations.Reference relations means , the problem of size N depends on some sub problem of size N by b.
//Merge sort is stable
//Applications of Marge sort: Large data sets and linked list
//Drawbacks of merge sort:Slower for smaller task, O(n) extra space, Go through whole process, even if arr is sorted.

#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){

    int an=mid-l+1;
    int bn=r-mid;
    //create 2 temp arr
    int a[an];
    int b[bn];

    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }

    int i=0;//Initial index of first subarray.,a
    int j=0;//Initial index of second subarray, b
    int k=l;//Initial index of merged sabarray

    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];

        }

    }
    while(i<an){
            arr[k++]=a[i++];
    }
    while(j<bn){
          arr[k++]=b[j++];
    }

}
void mergeSort(int arr[],int l,int r){
    //base case
    if(l>=r){
        return ;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main(){
    int arr[]={10,28,24,6,34,18,38,44};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}