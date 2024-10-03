
/*const and R value references(&&)are used for thin porpose

int &x=3;  invalid
const int  &x=3;  valid
int &&x=3;  valid

string &s="gfg"; invalid
const string s="gfg";  valid
string &&s="gfg";  valid

*/
#include<bits/stdc++.h>
using namespace std;

// void fun(const string &s){
void fun(string &&s){
    s="Hi "+s;//const val and we r trying to modify, through error so we use (&&)R value reference
    cout<<s;
}
int main(){
  fun("user");//we cannot pass litral,if we use const or R value in fun call we can pass litral
  return 0;

}