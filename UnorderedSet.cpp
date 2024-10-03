//An ordered set is based on hashing.
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(16);
    s.insert(12);
    s.insert(25);
    s.insert(25);//It will ignore.
    for(int x:s){
        cout<<x<<" ";//12 16 25 10     any order

    }cout <<endl;

    for(auto it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";//12 16 25 10
    cout<<endl;
   
    if(s.find(12)==s.end())
    cout<<" Not found";
    else cout<<"Found";//found
    cout<<endl;
     if(s.count(25))
     cout<<"found";
     else cout<<"not found";
    cout<<endl;
    



     cout<<s.size()<<" ";// 4 
    s.clear(); cout<<endl;
    cout<<s.size()<<" ";//0
    cout<<endl;
    return 0;
}
//However internally elements are stored in a different way, unordered set. set is a self balancing Binary search tree. like red black tree but unordered set is hashing. So there is no order among the elements in hash table elements might be stored in any particular order. An order set does not maintain any order of elements.