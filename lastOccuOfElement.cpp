#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    vector<int> v(6);

    for(int i=0;i<6;i++){
         cin>>v[i];
    }

    cout<<"Enter X: ";
    int x;
    cin>>x;

    int occurance=-1;
    // for(int i=0;i< v.size();i++){
    //     if(v[i]==x){
    //         occurance=i;
    //     }


    // }

    /*Traverse from last */

     for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurance=i;
            break;//no need to check whole arr,bca we travese it from last and first occ of elem from last is always last
        }


    }



    cout<<occurance<<endl;

    return 0;



}