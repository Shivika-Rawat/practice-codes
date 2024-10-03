#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v(6);

    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }

    cout<<"Enter X:";
    int x;
    cin>>x;

    int cnt=0;
    for(int ele:v){
        if(ele>x){
            cnt++;
        }

    }

    cout<<"Total no of element strictly greater than "<<x<<" is :"<<cnt;
    return 0;
}