//How actors work internally:they Internally use dynamic allocated array only//If current allotted space becomes full do following.
//1.Create a new ladder space of double size.
//2.Copy elements from old spaced new space.
//3.Free old space.
//ex: dinamically alloted:     int *ptr=new int[n];    
//Dynamic array.  :    vector<int> v;
//Dynamic vectors. are dynamic array where what happens. Your array size increases automatically as you insert more elements.This is a dynamic array. Arrays allocated using malloc. calloc, they are also dynamically allocated array Vectors, they also internally use dynamically allocated array. They internally have arrays only. Vector elements are also stored at contiguous locations. So they have the advantage of cache friendliness. They have the advantage of random access. What do you mean by random access? We can access the ith element in constant time. This facility is there only with the array data structures and dynamic arrays or any kind of arr, and vector is also an array, so they have random access. What is cache friendliness, since the elements are stored at contingent locations, its very likely that there is a locality of reference and elements are there any cache when they are accessed? So cache misses reduce. So that is, that is the common advantage, not specific to array, not specific to vector. These chache friendliness and random access are available in any types of arrays. There will be a dynamically allocated or they are allocated on the stack .
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(10);
    // v.push_back(12);
    v.push_back(15);
    v.push_back(42);
    v.push_back(40);
    v.push_back(42);
    v.push_back(40);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    return 0;
}
//Suppose compiler initially allocates space for N elements.Every time space become full, it doubles the size..
//Inserting element in a vector time complexity: O(1).