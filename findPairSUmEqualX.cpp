//given a vector arr[] sorted in inceasing order of n size and an integer x find if there exixts a pair in the array whose sum is exactly x;
#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={-2,-1,0,3,6,8,11,12};
int x=16,n=8;
//code to find if there is a pair withsu,mm x;
int i=0,j=n-1;
bool found = false;
while(i<j){
    if(arr[i]+arr[j]==x){
        found= true;
        break;
    }
    else if(arr[i]+arr[j]<x){
        //sum is less thax x, increase the sum
        i++;
    }
    else{
        //sum is more than x, decrease the sum
        j--;
   }

}
    if(found==true) cout<<"Yes";
    else cout<<"No";

return 0;
}
