#include "Livres.h"

// Constructeur

Livres::Livres(double d, string t, string a):Documents(d,t)
{
   auteur=a;
}

// Getter

string Livres::getAuteur()
{
   return auteur;
}

//Setter

void Livres::setAuteur(string nouvel_auteur)
{
   auteur=nouvel_auteur;
}

// Affichage 

void Livres::afficher()
{
   Documents::afficher();
   cout << "Auteur : " << auteur << endl;
}

// Frais de livraison

//double Livres::fraisLivraison()
//{
   //return fraisFixe + distance * prixUnit;
//}
