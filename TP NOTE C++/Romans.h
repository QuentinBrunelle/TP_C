#ifndef ROMANS_H
#define ROMANS_H

#include "Documents.h"
#include "Livres.h"

 class Romans: public Livres
 {
       
   public :
      Romans(double, string, string, int);
      int getPrixLitt();
      void setPrixLitt(int);
      void afficher();
      double fraisLivraison();
      
   private :
      int prixLitt;
 };
 
 
#endif
 