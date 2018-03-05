#include "Romans.h"

// Constructeur

Romans::Romans(double d, string t, string a, int p):Livres(d,t,a)
{
   prixLitt=p;
}

// Getter

int Romans::getPrixLitt()
{
   return prixLitt;
}

//Setter

void Romans::setPrixLitt(int nouveau_prix)
{
   prixLitt=nouveau_prix;
}

// Affichage 

void Romans::afficher()
{
   Livres::afficher();
   cout << "Prix littéraire : " << prixLitt << endl;
}

// Frais de livraison

//double Livres::fraisLivraison()
//{
   //return fraisFixe + distance * prixUnit;
//}
