//Capture list in Lambda  expression.
/*Capture list:See this.reaction why these two variables are local variables of the enclosing environment or enclosing function. If I do not write this M percent, then these variables would not be accessible inside this lemma expression. So this capture list here is used to capture the variables of the enclosing environment andthere are different things that we can provide in the capture list. We can provide the variables names that we want to capture like I want. I can provide X and Y by default then.

[]:nothing
[=]:Everything by value.
[&]:Everything by reference.
[=,&x]:Everything by value and X by reference.
[&,x]:Everything by reference and ex by value.
Static and global variables are always captured.
*/
#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    auto lambda_expr=[&](int a){
        x=x+a;
        y=y+a;
    };
    lambda_expr(20);
    cout<<x<<" "<<y<<endl;//25 30
    return 0;

}