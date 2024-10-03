//Sort one array, according to another array.
/*IP:a[]={3,1,2};
/* b[]={'G','E','K'};
op: b[]={'E','K','G'};
*/

//tc: O(n logn)
//sc: O(n)
#include<bits/stdc++.h>
using namespace std;
void sortChar(int a[],char b[], int n){
    pair<int,char>pa[n];
    for(int i=0;i<n;i++){
        pa[i]={a[i],b[i]}; //we make a pair of arr a an b ele and put it in pa pair;
        /*or    pa[i].first=a[i];
               pa[i].second=b[i];
               */

    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++){
        cout<<pa[i].second<<" ";    }
}
int main(){
int a[]={3,1,2};
char b[]={'G','E','K'};
int n=3;
sortChar(a,b,n);
return 0;
}

