#include <iostream>
#include"Point.h"
#include"Circle.h"
using namespace std;

int main()
{
    Circle circle(20,30,5);
    circle.move(15,20);
    cout<<circle.getCenter().getX()<<","<<circle.getCenter().getY()<<endl;
    return 0;
}
