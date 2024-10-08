//Friend function
//Example: we have an global function also as a friend.

#include<iostream>
using namespace std;
class Employee;
class Printer{
    public:
    void printEmp(const Employee &e);
};

class Employee{
    private:
    int id;
    string name;
    public:
    friend void Printer::printEmp(const Employee &e);
    Employee(int i,string n):id(i),name(n){

    }
};
void Printer::printEmp(const Employee &e)
{
    cout<<e.id<<" "<<e.name<<" ";
}
int main(){
    Printer p;
    Employee e(101,"ABC");
    p.printEmp(e);

    return 0;

}