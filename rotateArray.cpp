//Rotate the given array a by K steps where K is non-negative 
//Note: where K can be greater than N as well, where N is the size of array a

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int k=4;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int i :v){
        cout<<i<<" ";
    }cout<<endl;

 


    return 0;

}