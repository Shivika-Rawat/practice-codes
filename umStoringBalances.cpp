//Design, a data structure for storing balances
#include<bits/stdc++.h>
using namespace std;
//Naive Sol
int get(int id){
    for(int i=0;i<v.size();i++)
    if(v[i].first==id)
    return v[i].second;
    return 0;
}
vector<pair<int,int>>v;
void set(int id, int bal){
    for(int i=0;i<v.size();i++){
        if(v[i].first==id){
            v[i].second=bal;
            return ;
        }
    }
    v.push_back({id,bal});
}


/*Efficient method*/
unordered_map<int,int>m;
int get(int id){
    return m[id];
}
void set(int id, int bal){
    m[id]=bal;
}