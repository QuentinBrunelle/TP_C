#ifndef MANUELS_H
#define MANUELS_H

#include "Documents.h"
#include "Livres.h"

 class Manuels: public Livres
 {
       
   public :
      Manuels(double, string, string, int);
      int getNivScolaire();
      void setNivScolaire(int);
      void afficher();
      double fraisLivraison();
      
   private :
      int nivScolaire;
 };
 
 
#endif
 