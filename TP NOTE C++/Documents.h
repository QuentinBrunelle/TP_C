#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <iostream>
#include <string.h>

#define prixUnit 0.25
#define fraisFixe 2

using namespace std;
 class Documents
 {

   public :
      Documents(double, string);
      void afficher();
      double fraisLivraison();
      string getTitre();
      double getDistance();
      void setTitre(string);
      void setDistance(double);
      
       
   private :
      double distance;
      string titre;
 };
 
 
#endif
 