/* binary to decimal*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power=1,ans=0;
    while(n>0){
        int lastdigit= n%10;
        ans+=lastdigit*power;
        power*=2;
        n/=10;


    }
 cout<<ans;


    return 0;

}      