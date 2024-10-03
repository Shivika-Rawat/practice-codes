//Given an array of names of the fruits you are supposed to sort it in. Lexicographical order using the selection sort
//Input: Papaya lime watermelon Apple Mango Kiwi.
//Output: Apple kiwi lime mango papaya watermelon
#include<bits/stdc++.h>
using namespace std;

void selectionSort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        //Finding the minimum element
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp (fruit[minIdx],fruit[j])>0){
                minIdx=j;
            }
        }
        //Place the min element at the beginning
        if(i!=minIdx){
         swap(fruit[i],fruit[minIdx]);
   

        }
    }
    return;
    
}

int main(){
char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
int n=sizeof(fruit)/sizeof(fruit[0]);

selectionSort(fruit,n);
for(int i=0;i<n;i++){
    cout<<fruit[i]<<" ";
}cout<<endl;

    return 0;
}