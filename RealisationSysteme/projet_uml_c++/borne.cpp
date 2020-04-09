#include <iostream>
#include "borne.h"



int mode = 0;

int main()
{
    Prise prise;
    Boutons boutons;
    Voyants voyants;
    Timer timer;
    BaseDonnee base;

    LecteurCarte lecteurcarte(boutons ,voyants ,base ,prise);
    Generateur gen (lecteurcarte ,voyants,prise,boutons );
   
	
    lecteurcarte.connect_gene(&gen);
    using namespace std;

    while (1)
    {
        std::cout << "Select Mode: \n 1) Mode normal  \n 2) Mode maintenance\n" << std::endl;
        std::cin >> mode;
       // lecteurcarte.lecteurcarte_lire_carte();

        if(mode == 1){
            lecteurcarte.lecteurcarte_lire_carte();
	    }

	    if(mode == 2){
            std::cout << "Select: \n 1) Ajouter client \n 2) Supprimer client \n 3) Afficher liste clients\n" << std::endl;
            std::cin >> mode;
            
            if(mode == 1)
            {
                lecteurcarte._lire_carte_ajouter();
            }
            if(mode == 2)
            {
                lecteurcarte._lire_carte_supprimer();
            }
            if(mode == 3)
            {
                base.afficher_liste_client();
            }
	    }
    }

}
