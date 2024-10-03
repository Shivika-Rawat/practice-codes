#include<iostream>
using namespace std;
class a{
    int x;
    public:
    a(int y){
        x=y;
    }
    friend void print(a &ob);
};

void print(a &ob){
    cout<<ob.x<<endl;
}

int main(){
a ob(5);
// cout<<ob.x;
print(ob);

    return 0;
}