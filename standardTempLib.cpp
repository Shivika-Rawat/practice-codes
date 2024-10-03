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
    return 0;
}