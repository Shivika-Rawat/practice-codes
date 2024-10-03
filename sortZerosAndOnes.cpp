//Sort an array consisting of only zeros and ones.

#include<bits/stdc++.h>
using namespace std;
void sortZerosAndOnes(vector<int> &v){
    int zerosCnt=0;
    for(int ele:v){
        if(ele==0){
            zerosCnt++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zerosCnt){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
int n;
vector<int> v;
cin>>n;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}

sortZerosAndOnes(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    cout<<endl;
}

return 0;
}