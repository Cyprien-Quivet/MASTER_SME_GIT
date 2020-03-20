#include "boutons.h"


Boutons::Boutons(){


}

int Boutons::charge(){
		

	int state;
	timer.raz();
	
	do{
		if(io->bouton_charge == 1)
		{
			state = 1;
		}
		else
		{
			state = 0;
		}
		

	}while((timer.valeur() <= 60)&& (state == 0));

	printf("Etat BOUTON: %d \n", state);
	io->bouton_charge = 0; // remise a zero de l'état du bouton

	return state;


} 

int Boutons::stop(){


	return true;
}
