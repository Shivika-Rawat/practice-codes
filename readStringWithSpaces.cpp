#include<iostream>
using namespace std;
int main(){
    string name, n;
    cout<<"Enter your name \n";
    getline(cin,n,'$');

    cout<<"Your name is:"<<n<<endl;
    cout<<"Enter your name \n";
    cin>>name;
    cout<<"Your name is:"<<name<<endl;



    return 0;
}