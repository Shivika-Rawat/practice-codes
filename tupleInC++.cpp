//A tuple is used to store heterogeneous data together. It might be homogeneous data, but it allows heterogeneous data to be stored together. You can consider Tuple as a substitute for struct, struct in c language, which is mainly a C language feature .In a struct we could create a structure which has multiple types of elements like first name, last name, id similary we can use tuples to create multiple time elements.
#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<string,int ,string>t=make_tuple("abc",10,"xyz");
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t);
    get<0>(t)="pqr";
    cout<<"\n"<<get<0>(t);

    return 0;
}