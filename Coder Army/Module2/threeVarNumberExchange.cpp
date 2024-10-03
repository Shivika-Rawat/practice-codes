#include <iostream>
using namespace std;

int swap(int &a, int &b, int &c)
{
    int temp;
    temp=a;
    a=c;
    c=b;
    b=temp;
    
    return a,b,c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    swap(a,b,c);
cout<<a<<" "<<b<<" "<<c;
    return 0;
}