#include "Forme.h"
#ifndef POINT_H
#define POINT_H
class Point :public Forme{
      public:         
         Point(float _x=0,float _y=0):x(_x),y(_y){};        
         void setX(float _x){ x = _x;};
         void setY(float _y){ y = _y;};        
         float getX(){return x;};
         float getY(){return y;};
         
         virtual void affiche(){
              std::cout<< "Je suis le point avec les coordonnees " << x << "  et  " << y <<
              " dont le perimetre est 0 et l'aire  est 0 \n ";
         };
         virtual float perimetre(){return 0;};
         virtual float aire(){return 0;};
         
 /*        virtual char* identite(){
                 return "Point\n";
         };*/        
      protected:
         float x,y;  
};
#endif
