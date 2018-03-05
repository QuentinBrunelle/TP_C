#include "Documents.h"
#include <iostream>

#include <string.h>

using namespace std;

// Constructeur de documents avec comme arguments :
//    - Un titre (string)
//    - Une distance de livraison (double)

Documents::Documents(double d, std::string t)
{
   distance=d;
   titre=t;
}

// Getters 

string Documents::getTitre()
{
   return titre;
}

double Documents::getDistance()
{
   return distance;
}

// Setters

void Documents::setTitre(string nouveau_titre)
{
   titre=nouveau_titre;
}

void Documents::setDistance(double nouvelle_distance)
{
   distance=nouvelle_distance;
}

// Méthode d'affichage

void Documents::afficher()
{
   cout <<"Distance : "<<distance<<" km(s)"<< endl;
   cout <<"Titre : "<<titre<<endl;
   cout << "Frais de livraison : " << fraisLivraison() << " Euros" << endl;
}

// Calcul des frais de livraison

double Documents::fraisLivraison()
{
   return fraisFixe + (distance * prixUnit);
}

