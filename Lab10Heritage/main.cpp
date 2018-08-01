#include <cstdlib>
#include <iostream>

#include "Carre.h"
#include "Cercle.h"
using namespace std;

int main(){
    Point p(3,4);
    Carre c(2,3,6);
    Cercle ce(5,6,9);
    // ligature dynamique
    Point* tab[6];
    
    tab[0] = new Point;
    tab[1] = new Carre;
    tab[2] = new Cercle;
    tab[3] = &p;
    tab[4] = &c;
    tab[5] = &ce;
    for (int i=0; i<6; i++) tab[i] -> affiche();
    
    delete tab[0]; delete tab[1]; delete tab[2];
    
    // pour avoir le polymorphisme, il faut absolument utiliser les adresses des objets des classes
    // ligature statique
    Point tab1[3];
    tab1[0] = p;
    tab1[1] = c;
    tab1[2] = ce;
    for (int i=0; i<3; i++) tab1[i].affiche(); 
    
    /*for (int i=0; i<5; i++) cout << tab[i] -> getNom();

    
    cout<<p.getNom();
    cout<<c.getNom();
    cout<<ce.getNom(); */

 /*   cout << "\nPoint de coordonnes : "<< p.getX()<<" et "<<p.getY()<<endl;
    cout <<"Perimetre du point: "<<p.perimetre()<<endl;
    cout <<"Aire du point: "<<p.aire()<<endl;
    
    cout << "\nCarre de coordonnes : "<< c.getX()<<" et "<<c.getY()<<" et de cote : "<<c.getCote()<<endl;
    cout <<"Perimetre du carre: "<<c.perimetre()<<endl;
    cout <<"Aire du carre: "<<c.aire()<<endl;
    
    cout << "\nCercle de coordonnes : "<< ce.getX()<<" et "<<ce.getY()<<" et de rayon :"<<ce.getRayon()<<endl;
    cout <<"Perimetre du cercle: "<<ce.perimetre()<<endl;
    cout <<"Aire du cercle: "<<ce.aire()<<endl;*/

    cout << "Mon ajout test" << endl;
    cout << "Ajout test 1 de 1er collaborateur" << endl;
    cout << "Ajout test2 de 1er collaborateur" << endl;
    cout << "AAAAAAAAAAAAAAAAAA" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
