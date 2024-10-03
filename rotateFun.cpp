// Rotate function is used to rotate a container around a given middle point. Unlike most of the other functions here we have three iterators being passed. So the purpose of 1st iterator and last iterator is same. You want to consider the elements in this range, beginning from the this iterator until the iterator that you provide as a last iterator, which means elements from here to here Please remember V.end points to the element beyond the last element. So we consider the element from first until the last. Now there is 3rd iterator that we pass as V dot begin plus 2 here.So rotate function mainly reorganises the element in such a way that middle point parameter becomes your first element. All the elements remaining from here to print same order and ele before middle ele attached at the end

//It only does increment the iterator, so it only needs the type of iterators which can move forward, not by direction iterators. The weight internally works. It only increment the iterators. So you can use it for any container that provides forward alterators, like array liststrain, dq, or any other container which has iterators, which we can move in forward direction. For example, forward list, forward list as early forward iterator. So we can use whose rotate function for all these containers.
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
//TC O(n) or theta(n) time ,
int main(){
    vector<int>v={10,20,30,40,50,60};
    rotate(v.begin(),v.begin()+2,v.end());
    for(int x:v)
    cout<<x<<" ";//30 40 50 60 10 20 


    int arr[]={10,20,30,40,50,60};
    rotate(arr,arr+2,arr+6);
    for(int x:arr)
    cout<<x<<" ";//30 40 50 60 10 20 
    return 0;
}