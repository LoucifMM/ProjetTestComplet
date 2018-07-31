#include "Point.h"
#include <cmath>
#ifndef CERCLE_H
#define CERCLE_H
class Cercle :public Point{
      public:        
         Cercle(float _x=0,float _y=0,float _rayon=0):Point(_x,_y){
                     setRayon(_rayon);
         };
         void setRayon(float _rayon){
               rayon = ((_rayon>0)?_rayon : 0);
         };
         float getRayon(){return rayon;};
         virtual void affiche(){
              std::cout<< "Je suis le cercle avec les coordonnes " << x << "  et  " << y <<
               " dont le perimetre est " << perimetre() << " et l'aire est "<<
                        aire() << std::endl;
         };         
         virtual float perimetre(){return 2*M_PI*rayon;};
         virtual float aire(){return M_PI*rayon*rayon;};
         
/*         virtual char* identite(){
                 return "Cercle\n";
         };*/
      protected:
         float rayon;
};
#endif
