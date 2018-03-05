#ifndef DICTIONNAIRES_H
#define DICTIONNAIRES_H

#include "Documents.h"

 class Dictionnaires: public Documents
 {
       
   public :
      Dictionnaires(double, string, string);
      string getLangue();
      void setLangue(string);
      void afficher();
      double fraisLivraison();
      
   private :
      string langue;
 };
 
 
#endif
 