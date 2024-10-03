#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={10,20,30,40,50};
    vector<int>:: iterator i=v.begin();
    i=next(i);//reach t 2nd ele //by default it moves one position ahead
    cout<<(*i)<<" ";
    i=next(i,2);//moves 2 position ahead
    cout<<(*i)<<" ";
    i=prev(i);//moves to 1 position back
    cout<<(*i)<<" ";
    return 0;
}
//prev next and advance will work this way. If your input iterator is random exercise iterator, they are going to work in Big O-1 time, and they are going to simply increment the titrator by the given positions. But if your input iterator is, say, forward iterator, thenthey are going to increment the titrator one by one, and they are going to take the O(n)  time in that caseIf your input iterator is only forward iterator, like a singly link list iterator or an iterator that has address of a forward list item, then N cannot be negative. You cannot advance in iterator in the negative direction. You can only advance it in the positive directionIf your input iterator is bidirectional, then you can pass a negative as well as the advanced function. 