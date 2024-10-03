//Lemt expressions work introduced C11 version and before that function pointer was the only way to pass functionality as a parameter. The advantage that you get with Lambda expression says you do not have to create a separate function. Many times the functionalities that we pass as a parameter, they are small functionalities like compare function, right? And creating a separate function for this functionality and then passing a pointer to this function is cumbersome, right? Lemt expressions provide a quick way of doing it. You do not have to create a function Expressions are also good anonymous functions without creating a function, you can pass the functionality or you can implement the functionality. So here we have the short example. We passed.

#include<iostream>
#include<algorithm>
using namespace std;
//Sorting away by absolute value.
int main(){
    int arr[]={-20,10,-30,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,[](int a,int b){ return abs(a)<abs(b);});//lamda expression:A function without name
    for(auto x: arr)
    cout<<x<<" ";
    return 0;
}
//[                 ](             )        -> .          {             }
// capture list         parameters       retrun type         function body