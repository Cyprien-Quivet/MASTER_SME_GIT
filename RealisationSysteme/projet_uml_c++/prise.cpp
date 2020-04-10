#include "prise.h"

Prise::Prise(Voyants &voyant):voyant(voyant)  //Generateur(LecteurCarte &lecteur ,Voyants &voyants,Prise &prise,Boutons &boutons ):lc(lecteur),voyants(voyants), prise(prise), boutons(boutons)
{
	io = acces_memoire(&shmid);
	if(io == NULL) printf("erreur de memoire \n ");
    
}

void Prise::deverouiller_trappe()
{
	io->led_trappe=VERT;
}

void Prise::verouiller_trappe()
{
    io->led_trappe=OFF;
}

void Prise::set_prise(led val)
{
    io->led_prise= val ;
}

void Prise::attente_pdebranche()
{
    while((io->gene_u == 9) )
	{
	std::cout << "debranchez la prise" << std::endl;

	}
    std::cout << "prise debranchee" << std::endl;
	
	//gene.generer_PWM(STOP);    
	verouiller_trappe();
	set_prise(OFF);
    voyant.set_dispo(VERT);   
	voyant.set_charge(OFF);   
}
