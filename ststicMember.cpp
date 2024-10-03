//Static member can be a static data members and static functions.
#include<iostream>
using namespace std;
class Player{
    public:
    static int cnt;
    Player(){
        cnt++;
    }
    ~Player(){cnt--;}
    
};

int Player:: cnt=0;      
int main(){
    Player p1;
    cout<<Player::cnt<<" ";//p1.cnt            //1
    {
    Player p2;
    cout<<Player::cnt<<" ";            //2
    }

    cout<<Player::cnt<<" ";   //1
    return 0;
}




//This will also print count will access the same variable if I access P2.count, that will also access the same count variable because static variables are shared across all objects. They are created once for a class and every object share them so I can access static variables using class name or I can access them using the object name. But this is recommended way.
//You talked about static data members. The purpose of static data members is to create a member which is shared among all objects of a class. Static members are also called class members, right? Because they are class  specific. They shared among all the objects             