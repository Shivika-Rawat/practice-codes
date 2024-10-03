//Given an array of integers a,  move all the even integer at the beginning of the array followed by all the odd integer. The relative order of odd or even integer does not matter. Return any array that satisfies the condition

#include<bits/stdc++.h>
using namespace std;
void sortByParity(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
    return;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}

sortByParity(v);
 cout<<endl;

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    }
   

return 0;


}




