//Standard template library set of template classes for implementing commonly used data structures and functions.
// Three major components:  containers,iterators, algorithms.

/*
Container used to hold data of the same type example vector->class that defines a dynamic array.
list->Class for doubly link list.
map->Use to store unique key value pairs.
set->Used to stores unique value

Iterators:Used to iterate or traverse the container.
These are pointer like entities.
vector<int>::itrator itr;  //declaration

Algorithms:Functions that are used to manipulate data in the containers.
sort( ), min(), max()
*/

/*list: template class in STL for implementing doubly linked list 

*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3,4};
    auto itr=l1.begin();
    cout<<*itr<<endl;
    //l1.end()= iterator pointing to the memory location after 4
    //l1.rbegin()= iterator for the first element in reverse iteration
    //l1.rend()= iterator for the position after last element in reverse iteration
    advance(itr,2);   //advance or forward the itr 2 position
    cout<<*itr<<endl;
//range based loop
for(auto num: l1){
    cout<<num<<endl;
}

//using iterator
for(auto itr=l1.begin(); itr!=l1.end();itr++){
    cout<<*itr<<" ";
}cout<<endl;

//reverse traversal
for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
    cout<<*itr<<" ";
}cout<<endl;

//inserting element
auto it =l1.begin();
// l1.insert(it,9);
// l1.insert(it,11);
// l1.insert(it,15);
advance(it,2);
auto l=l1.begin();
auto r=l1.begin();
advance(r,2);
l1.insert(itr,l,r);

for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;

//1 2 1 2 3 4
auto s_itr=l1.begin();
advance(s_itr,2);//s_itr pointing to  3rd element
auto e_itr=l1.begin();
advance(e_itr,4); //e_itr pointing to 5th ele which is 3
l1.erase(s_itr,e_itr);
for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;

l1.push_front(25); //insert val in the front of list
for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;
l1.pop_front(); //removes val from front of list
for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;
l1.push_back(67);//insert val in the end of list
for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;
l1.pop_back();//removes val in the end of list
for(auto it=l1.begin(); it!=l1.end();it++){
    cout<<*it<<" ";
}cout<<endl;
    return 0;
}