#include<iostream>
using namespace std;

int sumInRange(int x,int y){
    int n=(y-x+1);
    int a=x;
    int result=(n*(2*a+(n-1)*1))/2;
    return result;
}
int main(){
    cout<<sumInRange(2,6);
    return 0;
}
