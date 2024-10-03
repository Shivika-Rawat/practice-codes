#include<iostream>
using namespace std;
template<typename T, int limit>
T arrMax(T arr[],int n){
    if(n>limit){

        //write error handling code......
    }
    T res=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>res)
        res=arr[i];

       
    }
     return res;
}
int main(){
    int arr1[]={10,40,3};
    cout<<arrMax<int,100>(arr1,3)<<endl;
    float arr2[]={10.5,3.5,81.5,30.5};
    cout<<arrMax<float,50>(arr2,4);

    return 0;

}

/*OR

#include<iostream>
using namespace std;
template<typename T, int limit>
T arrMax(T arr[],int n){
    if(n>limit){

        //write error handling code......
    }
    T res=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>res)
        res=arr[i];

       
    }
     return res;
}
int main(){
   // int x=100;  //it will not work. It should be const so that coplier can generate approprate code
    const int x=100;
    int arr1[]={10,40,3};
    cout<<arrMax<int,x>(arr1,3)<<endl;
    float arr2[]={10.5,3.5,81.5,30.5};
    cout<<arrMax<float,50>(arr2,4);

    return 0;

}
*/