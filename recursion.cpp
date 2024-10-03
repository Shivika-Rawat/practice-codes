//Enriquez we try to solve a bigger problem by finding out solution to A small sub problemswe represent the problem in the form of function. And these functions call itself to solve small sub problems.
//PMI:Principle of mathematical induction.  ->base case->assumption ->self work
#include<iostream>
using namespace std;

int fectorial(int n){
    if(n==1)
    return 1;
    int ans =n*fectorial(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fectorial(n);
    return 0;

}