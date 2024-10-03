//Sort student by marks.given student roll no and marks.
//Alternate mplimentation
#include<bits/stdc++.h>
using namespace std;

void printSortedByMarks(int roll[],int marks[],int n){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        v.push_back({marks[i],roll[i]});
        sort(v.begin(),v.end(),greater<pair<int,int>>());

    for(int i=0;i<n;i++){
        cout<<v[i].second<<" "<<v[i].first;
        cout<<endl;
    }
}
int main(){
int rollNo[]={101,103,105,107,108,109};
int marks[]={80,70,90,75,65,88};
printSortedByMarks(rollNo,marks,6);
    return 0;
}
/*Output:

105 90
109 88
101 80
107 75
103 70
108 65

*/