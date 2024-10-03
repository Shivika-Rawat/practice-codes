//Hint : Precedence of prefix ++ and * is same . Both are right associative (++ *ptr <=> ++(*ptr))
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20};
    int *ptr=arr;
    ++ *ptr;
    cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr;  //11 20 11
    return 0;
}