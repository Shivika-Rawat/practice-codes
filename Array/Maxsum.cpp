#include<bits/stdc++.h>
using namespace std;
class  Solution{
    public:
    int Maximize(int a[],int n)
    {
        long long int maxsum=0;
        long long int mod=1e9+7;
        
        sort(a,a+n);
        for(long long int i=0;i<n;i++){
             maxsum=maxsum+a[i]*i;
        }
        return maxsum%mod;
    } 
};

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}