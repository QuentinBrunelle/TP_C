#include "Documents.h"
#include "Livres.h"
#include "Romans.h"
#include "Manuels.h"
#include "Dictionnaires.h"

#include <iostream>

using namespace std;

int main()
{
   Documents doc(10,"Le livre de Quentin");
   doc.afficher();
   cout << doc.getTitre() << endl;
   
   Livres liv(50,"Notice Samsung", "Superman");
   liv.afficher();
   cout << liv.getAuteur()<< endl;
   liv.setAuteur("Batman");
   liv.afficher();
   
   Romans rom(25,"Divergente", "Quen  tin BRUNELLE", 2);
   rom.afficher();
   cout << rom.getPrixLitt() << endl;
   rom.setPrixLitt(3);
   rom.setAuteur("Dovahking");
   rom.setTitre("Divergente 2");
   rom.afficher();
   
   cout << endl << endl;
   
   Manuels man(5,"Cours de Web", "Mme Spengler", 5);
   man.afficher();
   
   cout << endl << endl;
   
   Dictionnaires dico(15,"Dictionnaire de la langue française", "Français");
   dico.afficher();

   return 0;
}