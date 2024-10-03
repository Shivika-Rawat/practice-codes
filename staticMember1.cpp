#include<iostream>
using namespace std;
class Player{
    public:
    static int cnt;
    Player(){
        cnt++;
    }
    ~Player(){cnt--;}
    static int getCnt(){return cnt;}
    
};

int Player:: cnt=0;      
int main(){
    Player p1,p2;
    cout<<Player::getCnt();//2
    return 0;
}