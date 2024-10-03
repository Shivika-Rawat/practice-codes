/* Given Q queries cheque if the given number is present in the array or not.
Note: value of all the elements in the array is less than 10 to the power 5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N=1E5+10;
    vector<int> freq(N,0);

for(int i=0;i<n;i++){
    freq[v[i]]++;

}    
cout<<"Enter Queries:";
int q;
cin>>q;
while(q--){
    int queryEle;
    cin>>queryEle;
    cout<<freq[queryEle]<<endl;

}

}