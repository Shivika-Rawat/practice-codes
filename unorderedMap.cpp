// unordered map like a map is used to store key value pairs. The difference is map is based on red black tree, but unordered map is based on hashing. One more difference between map and unordered map is map. restores keys and order form right there. Order form according to the predefined function. In general, they are ordered increasing order. You can define your own order when you have but in unordered map, there is no order among the case. So the idea is this, it says it is an unordered container with fast search, insert and delete operations .with map search insert and delete are        O(logn), but with unordered map, they are O(1) on average.
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",153});
    for(auto x:m)
    cout<<x.first<<" "<<x.second<<endl;
    /*
courses 153
ide 30
gfg 20
    */
   if(m.find("ide")!=m.end())
   cout<<"Found \n";
   else cout<<"Not found";

   for(auto it=m.begin(); it !=m.end(); it++)
   cout<<(it->first)<<" "<<(it->second)<<endl;

   if(m.count("ide")>0)
   cout<<"found";
   else cout<<"Not found";
    cout<<endl;
   cout<<m.size()<<" "<<endl;//3
   m.erase("ide");
   m.erase(m.begin());
   cout<<m.size()<<" ";//1

   //Begin end size empty=> O(1 in worst case)
   //Count find erase insert [] at => O(1) On average

    return 0;
}