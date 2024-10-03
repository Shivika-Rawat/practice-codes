//Given an array of integer of size n. Answer q queries where you need to print the sum of vallues in a given range of indices from i to r (both included)
//Note: The values of i and r in queries follow "1-based indexing".
//0 based imndexing -> 0........n-1
//1 based imndexing -> 1........n
//index=   0 1  2  3 4 5 6
//vector=  0 x1 x2........

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);//every ele is 0
    for(int i=1;i<=n;i++){
       cin>>v[i];
        
    }
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        //ans=prefixSumArr[r]-prefixSumArr[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
return 0;

}

/*Output
5  vector size
5 1 2 3 4  vector ele
3  query
1 3  query1
8
2 5  query2
10
4 4  query3
3
*/
