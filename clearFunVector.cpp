//Clear function removes all the element of the vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,5,20,15};
    v.clear();
    cout<<v.size()<<" ";
    cout<<endl;
    if(v.empty()==true)
    cout<<"Empty";
    else
    cout<<"Not empty";

    return 0;
}

//Output:
//0 
//Empty