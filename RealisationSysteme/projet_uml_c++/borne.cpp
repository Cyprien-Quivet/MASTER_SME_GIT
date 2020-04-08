// #include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "lecteurcarte.h"
#include "voyants.h"
#include "boutons.h"
#include "prise.h"
#include "timer.h"
#include "generateur_save.h"
#include "base_donnee.h"


int mode = 0;

int main()
{
    Prise prise;
    Boutons boutons;
    Voyants voyants;
    Timer timer;
    LecteurCarte lecteurcarte(boutons ,voyants ,base ,prise);
    Generateur gen (lecteurcarte ,voyants,prise,boutons );
    BaseDonnee base;
	
    lecteurcarte.connect_gene(&gen);
    using namespace std;

    while (1)
    {
        std::cout << "Select Mode: \n 1) Mode normal  \n 2) Mode maintenance\n" << std::endl;
        std::cin >> mode;
        lecteurcarte.lire_carte();

        if(mode == 1){
            lecteurcarte.lire_carte();
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
