//frwdlist impliments singly link list
//list impliments doubly link list
#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>l={10,15,20};
    l.push_front(5);
    l.push_front(7);
    l.push_front(3);
    l.push_front(45);
    l.pop_front();
    for(int x: l)
    cout<<x<<" ";

    return 0;
}

/*Output:  3 7 5 10 15 20   */