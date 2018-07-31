#include <iostream>
#include "carre.h"
#include "cercle.h"

using namespace std;

int main(){
    Forme *tab[4];
    tab[0]= new Cercle(10,10, 10);
    tab[1]= new Carre(2,2,1);
    tab[2]= new Cercle(3,3,1);
    tab[3]= new Carre(100,200,300);
     for (int i=0; i<4; i++) tab[i]->afficher();

    for (int i=0; i<4; i++) 
        delete tab[i]; 
/*    delete tab[2];
    delete tab[1];
    delete tab[0];
    delete tab[3];
  */  
    system("Pause");

    return 0;
}
