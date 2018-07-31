#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "forme.h"

class Point{
    public:
        Point(float _x=0, float _y=0):x(_x),y(_y) {
            //std::cout<<"Construction point"<<std::endl;
        }

        float getX() const{return x;}
        float getY() const{return y;}
        virtual void afficher()const{std::cout<<" le point ("<<x<<", "<<y<<")"<<std::endl;}

        void setX(float _x){x=_x;};
        void setY(float _y){y=_y;};
    private:
        float x, y;

};

#endif // POINT_H
