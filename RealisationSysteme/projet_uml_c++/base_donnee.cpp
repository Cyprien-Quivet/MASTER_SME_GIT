#include "base_donnee.h"


BaseDonnee::BaseDonnee()
{
    nb_clients=0;

    for(i=0 ; i<100; i++)
	{
		base_donnes[i] = 0;
	}
}

int BaseDonnee::authentifier(unsigned short int num_carte)
{
    	for(i =0; i<100; i++)
	{
		if(num_carte == base_donnes[i])
			{
			dernier_client = base_donnes[i];		
			return 1;
			}
	}
	std::cout <<"num carte" ;
	std::cout <<num_carte << std::endl  ;

	return 0;
}

int BaseDonnee::re_authentifier(unsigned short int num_carte)
{
		if(num_carte == dernier_client){
	std::cout <<"num carte" ;
	std::cout <<num_carte << std::endl  ;
	std::cout <<"num dernier client" ;
	std::cout <<dernier_client<< std::endl  ;
      
		return 1;
		}
		else{
		return 0;
		}
}

void BaseDonnee::ajouter_client(unsigned short int num_carte)
{
    i =0;	
	do{

		if(base_donnes[i] == 0)
		{
			base_donnes[i] = num_carte;
				std::cout <<"Client enregistré" ;
				std::cout <<num_carte << std::endl  ;
			i = 100;
		}
		i++; 
    }while(i <100);
}

void BaseDonnee::supprimer_client(unsigned short int num_carte)
{
	for(i =0; i<100; i++)
	{
		if(num_carte == base_donnes[i]){	
		base_donnes[i] = 0;
		std::cout <<"Client supprimé" << std::endl;
		}

	}
}

void BaseDonnee::afficher_liste_client()
{
    	for(i =0; i< 100 ;i++)
	{
		if(base_donnes[i] != 0)
		{
			std::cout <<"Le client n° ";
			std::cout <<i;
			std::cout <<"est";
			std::cout <<base_donnes[i] << std::endl;
			
		}
	}
}
