#include "Point.h"
#ifndef CARRE_H
#define CARRE_H
class Carre :public Point{
      public:
         
         Carre(float _x=0,float _y=0,float _cote=0):Point(_x,_y){
                     setCote(_cote);
         };
         
         void setCote(float _cote){
               cote = ((_cote>0)?_cote : 0);
         };
         
         
         float getCote(){return cote;};
        
         
         virtual void affiche(){
              std::cout<< "Je suis le carre avec les coordonnes " << x << "  et  " << y << 
              " dont le perimetre est " << perimetre() << " et l'aire est " << 
                        aire() << std::endl;
         };
         
         virtual float perimetre(){return 4*cote;};
         virtual float aire(){return cote*cote;};
         
         virtual char* identite(){
                 return "Carre\n";
         };
         
      protected:
         float cote;
      
      
};
#endif
