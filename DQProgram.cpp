#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq={10,15,30,5,12};
    auto it=dq.begin();//Returns itertor to pointing a first element
    it++;
    dq.insert(it,20);// iterator the Pointing to the element beyond the last element.  //10 20 15 30 5 10
    dq.pop_front();//20 15 30 5 12
    dq.pop_back();//20 15 30 5
    cout<<dq.size();//4
   //pop_front(), pop_back(), push_front() ,  pop_back()  => in TC: O(1) n DQ
    return 0;
    
}