#include<bits/stdc++.h>
using namespace std;
string digitAterDecimal(const string &no){
    int pos=no.find('.');
    if(pos==string::npos)
    return "";
    else
    return no.substr(pos+1);
}
int main(){
    string no="12.385";
    cout<<digitAterDecimal(no);//385

    return 0;

}