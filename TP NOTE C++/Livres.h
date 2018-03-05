 #ifndef LIVRES_H
#define LIVRES_H

#include "Documents.h"

 class Livres: public Documents
 {
       
   public :
      Livres(double, string, string);
      string getAuteur();
      void setAuteur(string);
      void afficher();
      double fraisLivraison();
      
   private :
      string auteur;
 };
 
 
#endif
 