#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{10,20,4,200,1};
    auto it=find_if(v.begin(),v.end(),[](int x){return x<10;});//4  //Four is less than 10.
    cout<<*it<<endl;
    
    return 0;
}