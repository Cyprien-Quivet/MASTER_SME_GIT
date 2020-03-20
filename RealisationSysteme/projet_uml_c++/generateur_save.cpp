
#include "generateur_save.h"

Generateur::Generateur(LecteurCarte &lecteur ,Voyants &voyants,Prise &prise,Boutons &boutons ):lc(lecteur),voyant(voyants), prise(prise), bouton(boutons)
{
	io = acces_memoire(&shmid);
	if(io == NULL) printf("erreur de memoire \n ");
	

}

void Generateur::charger_batterie(int etat_initial)
{
	int fin = 0;		
	int etat_present = etat_initial;	
	int etat_suivant = etat_present;

while(!fin)
{
	switch(etat_present)
	{
		case 1:	voyant.set_charge(ROUGE);
			prise.deverouiller_trappe();
			Generateur::generer_PWM(DC);
			std::cout << "# Case 1" << std::endl;
			std::cout << "Branchez la prise" << std::endl;
		 	if(io->gene_u == 9){etat_suivant = 2;}


		break;

		case 2:	//prise.set_prise(VERT);
			prise.verouiller_trappe();
			Generateur::generer_PWM(AC_1K);
			std::cout << "# Case 2" << std::endl;
			if(io->gene_u == 6){etat_suivant = 3;}
			if(io->bouton_stop == 1){etat_suivant = 5;}
		break;

		case 3: Generateur::fermer_AC();
			Generateur::generer_PWM(AC_CL);
			std::cout << "# Case 3" << std::endl;
			if(io->gene_u == 6){etat_suivant = 4;}
			if((io->bouton_stop == 1)||(io->gene_u == 9)){etat_suivant = 5;}

		case 4: std::cout << "# Case 4" << std::endl;
			std::cout << "Charge en cours..." << std::endl;
			if((io->gene_u == 9)||(io->bouton_stop == 1)){etat_suivant = 5;}
		break;
		
		break;

		case 5: Generateur::ouvrir_AC();
			voyant.set_charge(VERT);
			Generateur::generer_PWM(DC);
			fin =1;
			io->bouton_stop = 0;
			std::cout << "# Case 5" << std::endl;
			std::cout << "Client, insesez de nouveau votre carte" << std::endl;
		break;

	

		}
	etat_present = etat_suivant;
	}
	
	 lc.lecteurcarte_relire_carte();
}

void Generateur::generer_PWM(pwm val)
{
    io->gene_pwm=val;
	sleep(1);
}

void Generateur::fermer_AC()
{
    io->contacteur_AC = 1;
}

void Generateur::ouvrir_AC()
{
	io->contacteur_AC = 0;
}

float Generateur::tension()
{
    float tension;
	return tension;
}

void Generateur::charger()
{

}

void Generateur::deconnecter()
{
    
}
