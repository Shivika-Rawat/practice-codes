#include<bits/stdc++.h>
using namespace std;

class Fruit{
    public:
    string name;
    string color;
};
int main(){
    //object hai simple to dot(.) operator use karenge
Fruit apple;
apple.name="Apple";
apple.color="red";
cout<<apple.name<<"----"<<apple.color<<endl;

//Object pointor ke case m we have to use arrow operator

Fruit *mango=new Fruit();
mango->name="Mango";
mango->color="yellow";
cout<<mango->name<<"----"<<mango->color<<endl;


    return 0; 
}