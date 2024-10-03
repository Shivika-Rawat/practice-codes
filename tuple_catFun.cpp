#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<char,int ,int>t1('g',20,30);
    tuple<string ,int>t2("abc",50);
    auto t3=tuple_cat(t1,t2);
    cout<<get<0>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3);
//We talked about tuple container. We can see tuple as a replacement of a structure. All of the tuple member, all of the tuple functions that we have discussed in this video, they are constant operations. They do not require more than O(1) time. The reason is simple. Is mainly based on templates and compile time polymorphism. All the evaluations of these indexes, they have in a compile time because we are using template parameters. So Functions that we have discussed in the tuple they are constant operations
    return 0;
}