//Friend class.
//Friendship is granted not taken ,A class specifies that these are my friends
//Not mutual: if class A is friend of B ,it does not mean B is friend of A.only one class has access of private memeber of another class
//Not Transitive:if A is friend of B and B is friend of C that doen not mean A is friend of C.
//Not Inherited:if parent class is friend then inherited class does not become automatically friend of that class until less specify yourself
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
    friend class Printer;
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