#include<bits/stdc++.h>
using namespace std;
    set<int>s;
    void Insert(int x){
        s.insert(x);
    }
    bool Search(int x){
        return (s.find(x)!=s.end());
    }
    void Delete(int x){
        x.erase(x);
    }
    int getCeiling(int x){
        auto it =s.lower_bound(x)
        if(it==s.end())
        return INT_MAX;
        else *it;
    }
    int getFloor(int x){
        auto it =s.lower_bound(x);
        if(it == s.begin()){
            if(*it ==x) return x;
            else return INT_MIN;
        }
        else{
            if(it!=s.end() and *it==x) return *it;
            it--;
            return *it;
        }

    }
    //Every operation time complexity:O(log n)
