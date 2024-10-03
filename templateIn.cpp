/*Templates in C++
. write once, use for any data type
.Like Macros,templates  processed by compiler, but better than macros as type checking is preferred
. Two types of templates:
->Function templates:sort,linear search, binary search
-> class templates: stack, queue, deque

.The main concept behind stl
*/

//function template
#include<iostream>
using namespace std;
template<typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
}
int main(){
    cout<<myMax<int>(3,7)<<endl;//7
    cout<<myMax<char>('c','g')<<endl;//g
    cout<<myMax<float>(14.5,12.78)<<endl;//14.5
    return 0;
}