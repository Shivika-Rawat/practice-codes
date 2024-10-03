/*print the sum of the stream of N integer in the input using Do-While Loop*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //total no ,we can take input
    cin>>n;

    int sum=0;
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    return 0;
}