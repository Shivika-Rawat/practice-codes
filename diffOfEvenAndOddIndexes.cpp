/*find the difference between the sum of element at even indices to the sum of elements at odd indices*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,2,3,2,3,2,3,2,3,2,3,2,3};
    int ansSum=0;
    for(int i=0;i<14;i++){
        if(i%2==0){
            ansSum+=arr[i];
        }
        else{
            ansSum-=arr[i];
        }

    }

    cout<<ansSum<<endl;

    return 0;

}