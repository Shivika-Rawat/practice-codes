//Operations allowed in pointer. ++,--, ptr+int (gives ptr val ahead from its position to obj ahead7 in memory) , ptr-int  (gives ptr val back from its position in memory), and ptr1-ptr2(gives int val)

#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout<<*ptr<<" "<<ptr<<endl;//10 0x61fefc
    ptr++;
    cout<<*ptr<<" "<<ptr<<endl; //20 0x61ff00
    ptr--;
    cout<<*ptr<<" "<<ptr<<endl; //10 0x61fefc
    ptr+=3;
    cout<<*ptr<<" "<<ptr<<endl; //40 0x61ff08
    ptr-=2;
    cout<<*ptr<<" "<<ptr<<endl; //20 0x61ff00

    return 0;
 }