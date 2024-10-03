//Upper boundis similar to lower bound. It also takes a sorted range as an input. Range means. two iterators. First iterator pointing to the first element. Second iterator pointing to the element beyond the last element of the range. Anda value. And what it does, it finds iterator to the element, which is to the first element, which is greater than the given value .
//"Returns. I treated to the first greater element in a sorted range." O(log n) When we have random access. n is the total number of elements in the range
#include<bits/stdc++.h>
using namespace std;
//Advance function is same as lower bound and upper bound. It takes linear time so it.is helpful where we don't use a lower bound and upper bound like linked list,set ETC.
int main(){
    vector<int>v={10,20,20,20,30,40};
    int x=20;
    auto it=upper_bound(v.begin(),v.end(),20);
    cout<<(*it)<<endl;//30
    cout<<(it-v.begin())<<endl;//4

    it=upper_bound(v.begin(),v.end(),25);
    cout<<(*it)<<endl;//30
    cout<<(it-v.begin())<<endl;//4

     it=upper_bound(v.begin(),v.end(),50); //itreturn the position beyond last ele,or After the last element. 
     cout<<(it-v.begin())<<endl;//6
    auto i=upper_bound(v.begin(),v.end(),x);
     if(i!=v.begin() and (*(it-1)==x))
     cout<<"Found";
     else
     cout<<"Not Found";//Not found.

     int arr[]={10,20,20,20,30,30,40};
      auto itr=upper_bound(arr,arr+7,20);
    cout<<(*itr)<<endl;//30
     itr=upper_bound(arr,arr+7,25);
    cout<<(*itr)<<endl;//30
    if((itr==(arr+6))|| ((*itr)!=20))
    cout<<"Not present";//Not present
    else
    cout<<"Present";

    return 0;
}