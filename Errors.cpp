/*
Syntax error:Grammatical mistakes or syntax uncompleted
Semantec errors.:Semantic errors occurs when your statement does. not make any sense.ex: 16=x;
Linker error.:Linker error occurs in the linking phase.AndAnd this function's definition is not present, then you will get a link error. 
Runtime error:Runtime error occurs when you program is running. And these errors are more dangerous because you have generated an executable file. Your program might be in production, might be used in a company. And when your software is being done, its showing some runtime errors. So it is good to have compilation errors. You can fix.them while you are developing a software. But runtime errors are more dangerous. So runtime error example is say you are doing X / Y.And you are not checking whether Y is zero or not. If a user inputs a value of Y, which is 0 then you are doing X by 0 which will causeway runtime error.
Logical error: x= a+b/2 //This is used to find the average of two numbers. but you forgot to add a bracket a + bconfess does not have any runtime error, but it has logical error. This should be doing a plus B by 2 but you did not put brackets. So what is it doing now? It is doing a plus half of B. So this logical error can be corrected by putting brackets around a + b.
*/
//Syntax error
#include<iostream>
using namespace std;
int main(){
    int x,y;
    x=10;
    y=20//semicolon missing error
    z=x+y;//var z is not been declare before use
    cout<<z;
    return 0;
}
//Symantec error.
int main(){
    int x=10,y=20,z=30;
    x+y=z;//This line does not make any sense. This line makes error.
    return 0;
}
//Linker error.
void fun();
int main(){
    fun();//Linker.errors occur when you program has compiled fine. It has no syntax errors. It follows the grammar of a programming language. It does not have any schema errors, but the functions which are being called inside the program are not available. The definitions are not availableSo when you call a function in your main or when these functions call some other functions, these functions definitions are served within the current file first. Then in the standard path, and then also in the path that you have provided explicitly. So if these functions are not available, if the definitions are not available anywhere, then you see a linker error. 
    return 0;
}
//Runtime errors:It occurs when the program has compiled fine. There were no index error, there was no cementic error. It could link all the functions which were called inside the main function. It could find their definitionsBut when it started running, it could Not continued because of some unexpected. conditions. 
int main(){
    int x=10,y=0,z;
   z=x/y;
    return 0;
}
//Solution of this example.
int main(){
    int x=10,y=0,z;

   if(y==0){
    cout<<"Invalid input y";
    exit(0);
   }
      z=x/y;
    return 0;
}
//Logical error
int main(){
    int x=10,y=20;

   if(x=y){//
    cout<<"same";//Output will be same, but they are actually not same.This is why, becausewe have put one equal to sign here, we forgot to write one equal  sign //if(x==y)  
   }
   else{
    cout<<"Not same.";
   }
      
    return 0;
}