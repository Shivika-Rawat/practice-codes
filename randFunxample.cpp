#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    for(int i=0;i<5;i++)
    cout<<rand()%100<<" ";//Print. The numbering given range. 0 to 99
    return 0;
}