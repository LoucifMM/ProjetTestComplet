#include <iostream>
#include "cercle.h"

Cercle::Cercle(float _x, float _y,float _rayon):centre(new Point(_x,_y)){
    //centre= new Point(_x,_y);
    setRayon(_rayon);
}

Cercle::~Cercle(){
    delete centre; centre=0;
    //dtor
}
Cercle::Cercle(const Cercle &c):centre(new Point(*c.centre)) {
    setRayon(c.rayon);
}

Cercle & Cercle::operator= (const Cercle &c) {
       if (this != &c) {
           delete centre; 
           rayon=c.rayon;
           centre = new  Point(*c.centre);
           // *this->centre = *c.centre
       }    
}     


 void Cercle::afficher()const{
     Forme::afficher();
    std::cout<<"le circle avec le perimetre "<<perimetre()<<" et l'aire "<<aire()<<std::endl;
 }
