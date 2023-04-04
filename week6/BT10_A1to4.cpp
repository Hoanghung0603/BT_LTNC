#include <iostream>
using namespace std;
struct Point{
    int x,y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){}
    };
void print (Point a){
    cout<<a.x<<' '<<a.y<<endl;
    cout<<&(a.x)<<' '<<&(a.y)<<endl;
}

void Print (Point &a){ //tham chieu
    cout<<&(a.x)<<' '<<&(a.y)<<endl;
}

Point midPoint(const Point &a, const Point &b){
    Point c;
    c.x=(a.x+b.x)/2;
    c.y = (a.y+b.y)/2;
    return c;
}
int main(){
    Point a(1,3), b(3,3);
//    print(a);
//    Print(a);
//    print(midPoint(a,b));
cout<<"dia chi cua x,y: " << &b.x << ' '<<&b.y<<endl;
cout<<"dia chi cua a: " << &bs;
}
