// #include<bits/stdc++.h>
// using namespace std;
// template<typename T>
// struct Pair{
//     T x,y;
//     Pair(T i,T j) {
//         x=i;
//          y=j;
//          }
//     T getFirst() {
//         return x;
//     }
//     T getSecond(){
//         return y;
//     }

// };
// int main(){
//     Pair<int>p1(10,20),p5(30,40);
//     Pair<float>p2(10.45,20.47);
//     Pair<char>p3('a','b');
//     cout<<p1.getFirst()<<" "<<p1.getSecond()<<endl;
//     cout<<p2.getFirst()<<" "<<p2.getSecond()<<endl;
//     cout<<p3.getFirst()<<" "<<p3.getSecond()<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
template<typename T>
Pair<T>::getFirst(){
        return x;
    }
struct Pair{
    T x,y;
    Pair(T i,T j) {
        x=i;
         y=j;
         }
    T getFirst();
    T getSecond(){
        return y;
    } 

};
int main(){
    Pair<int>p1(10,20),p5(30,40);
    Pair<float>p2(10.45,20.47);
    Pair<char>p3('a','b');
    cout<<p1.getFirst()<<" "<<p1.getSecond()<<endl;
    cout<<p2.getFirst()<<" "<<p2.getSecond()<<endl;
    cout<<p3.getFirst()<<" "<<p3.getSecond()<<endl;
    return 0;
}