#include<iostream>
#include<algorithm>
using namespace std;
//Short function internally use quicksort and.it is a hybrid of quickshot, heap sort and insertion sort by default.It uses quick sort and if quicksort is doing unfair partitioning and going to take more than log n time, it switches to heap sort And whenever size becomes really small, it switches to insertion sort. So worst case performance and all this case performance of sort function is N log N. Also the number of comparisons.it does its N log in, so it's an analog which is an optimal time for any general purpose sorting function and it internally uses introsort.
struct Point{
    int x,y;
};
bool myCmp(Point p1,Point p2){
    return (p1.x <p2.x);
}
bool myCmpByY(Point p1,Point p2){
    return (p1.y <p2.y);
}
bool myCmpByYGreater(Point p1,Point p2){
    return (p1.y >= p2.y);
}
int main(){
    Point arr[]={{3,10},{2,8},{5,4}};
    sort(arr,arr+3,myCmp);
    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<endl;//Shot by remain according to the.increasing value of X .
    cout<<endl;
    cout<<endl;

    sort(arr,arr+3,myCmpByY);
    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<endl;//Shot by remain according to the.increasing value of y .
    cout<<endl;
    cout<<endl;

    sort(arr,arr+3,myCmpByYGreater);
    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<endl;//Shot by remain according to the Decreasing value of y .
}