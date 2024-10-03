//Avoiding copy of large objects during function calls.

#include<bits/stdc++.h>
using namespace std;
void print (vector<int> &v){
    for(auto x:v)
    cout<<x<<" ";

}
int main(){
    vector<int> v;
    for(int i=0;i<1000;i++){
        v.push_back(i);
    }
    print(v);  
    return 0;
}


//Modifications in for each loop.
/*

int main(){
    vector<int>vect[10,20,30,40];
    for(auto &x:vect)
    x+=5;
    for(auto x:vect)
    cout<<x<<" ";

    return 0;
}

*/
/*
Avoiding copy of large object in for each loop.

int main(){
    vector<string>vect{"geeksforgeeks practice ", "geeksforgeeks ide", "geeksforgeeks write"};
    for(const auto &x: vect)
    cout<<x<<" ";
    return 0;
}



*/


