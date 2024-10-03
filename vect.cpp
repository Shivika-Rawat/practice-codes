/*Advantages of Vector
Dynamic size.
Rich library function find erase insert etc.
Easy to know size.
No need to pass size.
Can be returned from a function.
By default initialized with default values.
We can copy a vector to other. ex : v1=v2;
*/
//Vector declaration, initialisation and traversal.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(30);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";//it does not check  for index out of bound      or 
    //    cout<<v.at(i)<<" "; //it checks for arr idx out of bound,it will through exception

    }
    return 0;
}