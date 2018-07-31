#include "carre.h"

Carre::Carre(float _x, float _y,float _cote):coin(new Point(_x,_y)){
    //ctor
   // coin=new Point(_x,_y);
   setCote(_cote);
}

Carre::~Carre(){
    //dtor
    delete coin; coin=0;
}

Carre::Carre(const Carre &c):coin(new Point(*c.coin)) {
    setCote(c.cote);
}

Carre & Carre::operator= (const Carre &c) {
       if (this != &c) {
           delete coin; 
           cote=c.cote;
           coin = new  Point(*c.coin);
           // *this->centre = *c.centre
       }    
}     
void Carre::afficher()const{
    Forme::afficher();
    std::cout<<"le carre avec le perimetre "<<perimetre()<<" et l'aire "<<aire()<<std::endl;
}
