#include<bits/stdc++.h>
using namespace std;
class  Test{
    public:
    Test(){
        cout<<"Default"<<endl;
    }
    Test (int x){
        cout<<"Parametriged "<<endl;
    }
};
class Mam{
    Test t;
    public:
    Mam():t(10){

    }
    
};

int main(){
    Mam m;
    return 0;
}
