#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{10,5,3,20,100};
    int res=count_if(v.begin(),v.end(),[](int x){return x>=10;});//3   //Three elements are greater equal to than 10.
    cout<<res<<endl;
    
    return 0;
}