#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> v(10);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter X: ";
    int x;
    cin>>x;

    int occurance=0;
    for(int ele:v){
        if(ele==x){
            occurance++;
        }
    }
    cout<<occurance<<endl;

    return 0;

 }