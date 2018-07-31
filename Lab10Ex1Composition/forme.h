#ifndef FORME_H
#define FORME_H
#include <iostream>
class Forme{   
    public :   
      virtual float perimetre() const =0 ;
      virtual float aire() const =0;
      virtual void afficher() const {std::cout << "Je suis ";}
};
#endif
