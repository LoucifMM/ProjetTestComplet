#ifndef CERCLE_H
#define CERCLE_H
#include <cmath>
#include "point.h"


class Cercle :public Forme{
    public:
        Cercle(float =0, float =0,float =0);
        virtual ~Cercle();
        Cercle(const Cercle &);
        Cercle & operator= (const Cercle &);
        virtual void afficher()const;

        void setRayon(float _rayon){rayon = ((_rayon>0)?_rayon : 0);}
        float getRayon()const{return rayon;}

        float perimetre()const{return 2*M_PI*rayon;}
        float aire()const{return M_PI*rayon*rayon;}
    private:
        Point *centre;
        float rayon;
};

#endif // CERCLE_H
