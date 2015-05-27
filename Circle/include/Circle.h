#ifndef CIRCLE_H
#define CIRCLE_H
#include"Point.h"

class Circle:public Point
{
    public:
        Circle(int x,int y,int r):Point(x,y)
        {
         this->r=r;
        }
        void move(int x,int y)
        {
           Point::move(x,y);
        }
        Point &getCenter()
        {
         return *this;
        }
        virtual ~Circle();
    protected:
    private:int r;
};

#endif // CIRCLE_H
