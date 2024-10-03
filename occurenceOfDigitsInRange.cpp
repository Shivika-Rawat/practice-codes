// Apprentice of digits in a range
#include<iostream>
using namespace std;
/*
1 to 20
digit: 5
ans: 2 times
*/
int Occur(int a,int b,int digit){
    int count=0;
    for(int i=a;i<=b;i++){
        int temp=i;
        while(temp>0){
            if(temp%10==digit)
                count++;
                temp=temp/10;
            
        }
      
    }
      return count;

}
int main(){
    int a,b,digit;
    cout<<"Enter the Range of no:"<<endl;
    cin>>a>>b;
    cout<<"Enter the digit which Occurence you want to count:";
    cin>>digit;
    cout<<endl;
    cout<<Occur(a,b,digit);
}