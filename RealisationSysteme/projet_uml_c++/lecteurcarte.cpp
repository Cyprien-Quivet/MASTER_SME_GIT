
#include "lecteurcarte.h"


LecteurCarte::LecteurCarte(Boutons &bouton ,Voyants &voyant ,BaseDonnee &bd ,Prise &p): boutons(bouton),voyants(voyant), basedonnee(bd), prise(p){
	initialisations_ports();
	io = acces_memoire(&shmid);
	if(io == NULL){
	 std::cout <<"erreur de memoire"<< std::endl ;
	}
	num_client=0; //numéro de la carte du client
}

void LecteurCarte::lecteurcarte_lire_carte()
{
		std::cout <<"Client, entrez votre carte..."<< std::endl ;
		attente_insertion_carte();
		num_client = lecture_numero_carte();
		std::cout <<"Carte Num :";
		std::cout <<num_client<< std::endl ;


	if(basedonnee.authentifier(num_client) == 1  )
	{
	
		std::cout <<"Authentification reussie !!"<< std::endl ;
		voyants.blink_charge(VERT);
		if(boutons.charge() == 1 )
		{
			voyants.set_dispo(OFF);
			std::cout <<"Retirez Carte ..."<< std::endl ;
			attente_retrait_carte();
			std::cout <<"... Done !"<< std::endl ;
			gene->charger_batterie(1);
			
		}
	
	}
	else
	{
		
		voyants.set_defaut(ROUGE);
		std::cout <<"Retirez Carte ..."<< std::endl ;
		voyants.set_defautOFF(OFF);
		attente_retrait_carte();


	}



	

}

void LecteurCarte::lecteurcarte_relire_carte()
{

do{

		attente_insertion_carte();
		num_client = lecture_numero_carte();
		std::cout <<"Carte Num : " ;
		std::cout <<num_client<< std::endl ;
		
	
		if(basedonnee.re_authentifier(num_client)== 1)
		{
			printf("Re_authentification reussie.. \n ");
			printf("Retirez Carte ... \n ");
			attente_retrait_carte();
			prise.deverouiller_trappe();
			prise.attente_pdebranche();
			
		}
		else
		{
			std::cout <<"Echec de re_authentification .." <<std::endl ;
			voyants.set_defaut(ROUGE);
			std::cout <<"Retirez Carte ... " <<std::endl ;
			voyants.set_defautOFF(OFF);
			attente_retrait_carte();
			num_client =0;
			
			
		}



}
while(basedonnee.re_authentifier(num_client)== 0);





}

void LecteurCarte::_lire_carte_ajouter(){
		std::cout <<"Insérez la carte du client à ajouter.. " <<std::endl ;
		attente_insertion_carte();
		num_client = lecture_numero_carte();
		basedonnee.ajouter_client(num_client);


}
void LecteurCarte::_lire_carte_supprimer(){	
		std::cout <<"Insérez la carte du client à supprimer... " <<std::endl ;
		attente_insertion_carte();
		num_client = lecture_numero_carte();
		basedonnee.supprimer_client(num_client);



}

