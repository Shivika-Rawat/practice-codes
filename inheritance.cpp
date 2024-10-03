#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int id;
};
class student :public Person{
    private:
    int marks;
    public:
    void print(){
        cout<<name<<" "<<id<<" "<<marks<<endl;

    }

};



int main(){

}

//Public:Protected and public of page class remains as they are.
//Private:Protective and public of base class become private.
//Protected:Protected and public of base class become protected.