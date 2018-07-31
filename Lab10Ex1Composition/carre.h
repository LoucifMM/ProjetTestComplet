#ifndef CARRE_H
#define CARRE_H

#include "point.h"

class Carre:public Forme{
    public:
        Carre(float=0, float=0,float=0);
        virtual ~Carre();
        Carre(const Carre &);
        Carre & operator= (const Carre &);
        void afficher()const;
        void setCote(float _cote){((_cote>0) ? _cote : 0);}
        float getCote()const{return cote;}

        float perimetre()const{return 4*cote;}
        float aire()const{return cote*cote;}
    private:
        Point *coin;
        float cote;
};

#endif // CARRE_H
