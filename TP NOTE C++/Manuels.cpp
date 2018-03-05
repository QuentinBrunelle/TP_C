#include "Manuels.h"

// Constructeur

Manuels::Manuels(double d, string t, string a, int n):Livres(d,t,a)
{
   nivScolaire=n;
}

// Getter

int Manuels::getNivScolaire()
{
   return nivScolaire;
}

//Setter

void Manuels::setNivScolaire(int nouveau_niv_scolaire)
{
   nivScolaire=nouveau_niv_scolaire;
}

// Affichage 

void Manuels::afficher()
{
   Livres::afficher();
   cout << "Niveau Scolaire : " << nivScolaire << endl;
}

// Frais de livraison

//double Livres::fraisLivraison()
//{
   //return fraisFixe + distance * prixUnit;
//}
