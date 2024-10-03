#include<vector>
#include<numeric>
#include<iostream>
using namespace std;
//TC:O(1)
int myFun(int x, int y){
    return x*y;
}
int main(){
    
    int init_res=1;
    int arr[]={10,20,30};
    cout<<accumulate(arr,arr+3,init_res,myFun);//6000

    return 0;
}