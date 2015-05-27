#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

class Point
{
    public:
        Point(int x,int y)
            {
                this->x=x,this->y=y;
            }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void move(int x,int y)
        {
            this->x=this->x+x;
            this->y=this->y+y;
        }
        virtual ~Point();
    protected:
    private:int x,y;
};

#endif // POINT_H
