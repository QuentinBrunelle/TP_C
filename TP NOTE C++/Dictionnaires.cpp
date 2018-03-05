#include "Dictionnaires.h"

// Constructeur

Dictionnaires::Dictionnaires(double d, string t, string l):Documents(d,t)
{
   langue=l;
}

// Getter

string Dictionnaires::getLangue()
{
   return langue;
}

//Setter

void Dictionnaires::setLangue(string nouvelle_langue)
{
   langue=nouvelle_langue;
}

// Affichage 

void Dictionnaires::afficher()
{
   Documents::afficher();
   cout << "Langue : " << langue << endl;
}

// Frais de livraison

//double Livres::fraisLivraison()
//{
   //return fraisFixe + distance * prixUnit;
//}
