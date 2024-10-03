//This function takes a container as an argument and an initial value as an argument. And by default, this function is used to find sum of elements of the container. We can do other things other than sum also. For example, we can use it to find the subtraction with sub initial value. But the default operation is some of the elements in the container. 

#include<vector>
#include<numeric>
#include<iostream>
using namespace std;
int main(){
    vector<int>v={10,20,30};
    int init_res=0;
    cout<<accumulate(v.begin(),v.end(),init_res);//60
    cout<<endl;
    int initial_res=100;
    cout<<accumulate(v.begin(),v.end(),initial_res,minus<int>());//40

    return 0;
}