//Dqueue provider facility of both stack and queue.In Dqueue you can insert and delete from both the ends.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq={10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x:dq) cout<<x<<" ";
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back();

//Output: 5 10 20 30 50 
//        5 50
    return 0;

}


//DQ in C++ stl is generally implemented in a different way from other languages. In most of the other languages, it's implemented as doubly linked list. But C++ DQ stl guarantees few extra things like it allows you to have random access. It.allows you to do arbitrary number of Insertions in big O(1) upon time, which is not provided by DQ implementations of other languages typically. So DU implementation is really interesting. 