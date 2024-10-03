#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(16);
    s.insert(12);
    s.insert(25);
   
    cout<<s.size()<<" ";//4
    s.erase(12);
    cout<<s.size()<<" ";//3
    auto it=s.find(10);
    s.erase(it);
    cout<<s.size()<<" ";//2

    s.insert(14);
    s.insert(32);
    s.insert(45);
    s.erase(s.begin(),s.end());
    cout<<s.size();//0
    cout<<endl;

    //An unordered set  uses hashing internally, so with hashing you have the time complexities of search, insert and delete as O(1) on average. If you remember the hashing data structure, it assumes that your hash function uniformly distributes the items and if the items are uniformly distributed then every chain is going to have some constant number of items. If you have a hash table of size N and if you are having N items and if every item is being distributed uniformly in every slot, then every slot is going to have on average one item however they can be slight variations. That's what might be having 3 items, 4 items, but they are all constant. So hashing on average takes, constant time under the assumption that your hash function uniformly distributes the data across the different slots of the hash table.
    //Begin end rbegin rend=> O(1)
    //Insert erase(val) erase(it) find count.=> O(1) On average.
    return 0;
}

//Applications of unordered set:An Unordered set mainly implemented using hashing.Hashing has this great thing that search insert and delete can be done in O(1) time on average. So whenever you need to do these operations on a set of keys, you want to do search, insert or delete, or you want to do a subset of these three operations. You can use unordered set because there is no other container that can provide these operations. These three operations in constant  time on a set of keys, please.remember there are more implementations of hashing, but the unordered set works only on keys. There are implementations like unordered map which work on key value pairs.whenever you have only keys you want to store them, you want to have the operation search insert delete or a subset of these operations you use unordered set. 
/*


*/