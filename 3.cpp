#include <iostream>

using namespace std;

struct rectangle{
int length;
int breadth;
int area;
};
int main()
{
    struct rectangle r;
    r.length=6;
    r.breadth= 20;
    r.area=r.length* r.breadth;
    cout<<"Area of rectangle is"<<endl<<r.area;

    return 0;
}