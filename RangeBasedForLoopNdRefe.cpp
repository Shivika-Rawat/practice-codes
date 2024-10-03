/*Range based for loop and references 
prob with normal loops:
1. Cannot change elements
2. Performance issues
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     for(int &x:arr)//makes the copy of arr, changes are not reflected in original arr, so we use &
//     x*=2;

//     for(int x:arr)
//     cout<<x<<" ";//output:10,20,30,40
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr[]={"geeksfprgeeks","cpp cources","learning"};
    for(const string &s:arr)
    cout<<s<<" \n";
    return 0;

}
