#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int low=10,high=100;
    int range =high-low+1;
    int n=5;
    for(int i=0;i<n;i++)
    cout<<(rand()%range)+low<<" ";
    return 0;
}