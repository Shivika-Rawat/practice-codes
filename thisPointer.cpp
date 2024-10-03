// #include<iostream>
// using namespace std;

// class Point{
//     int x,y;
//     public:
//     Point(int x1,int y1){
//         x=x1;//this->x=x1;
//         y=y1;//this->y=y1;
//     }
// };
// int main(){
// Point p1(10,20),p2(5,5);
// }


// Avoiding naming collision
#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int x,int y){
       this->x=x;
       this->y=y;
    }
};
int main(){
Point p1(10,20),p2(5,5);
}
