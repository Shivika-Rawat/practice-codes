#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//TC:O(logn) Only if your container is random access.if your container is not random access like list then it will takes linear time complexity.
struct Point {
    int x,y;
    Point(int i,int j){
        x=i;
        y=j;
    }
};
bool myCmp(Point p1,Point p2){
    return (p1.x< p2.x);
}
int main(){
    vector<Point>v={{10,5},{2,100},{50,90}};
    sort(v.begin(),v.end(),myCmp);
    Point p(2,100);//It searches basis on.X Element.not the basis of Y coordinate element.So you can pass any Y coordinate andelement, and it will always give you found because X element is present.
    if(binary_search(v.begin(),v.end(),p,myCmp))
    cout<<"Found.";//Found.
    else
    cout<<"Not found.";

    return 0;
}