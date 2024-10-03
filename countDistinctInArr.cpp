#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n){
    int count = 0;
    bool isDistinct = true;
    for(int i=0;i<n;i++){
        isDistinct = true;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                isDistinct=false;
                break;
            }
        }
        if(isDistinct==true)
        count++;
    }
    return count    ;
}
int main(){
    int n;
    int a[20];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<countDistinct(a,n);

    return 0;
}