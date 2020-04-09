#include "voyants.h"


Voyants::Voyants(){
	io = acces_memoire(&shmid);
	if(io == NULL)  std::cout <<"erreur de memoire"<< std::endl ;


}

void Voyants::set_charge(led val)
{
	io->led_charge=val;
}
void Voyants::set_defautOFF(led val)
{
	io->led_defaut=val;
}
void Voyants::set_defaut(led val)
{
	if(io == NULL)  std::cout <<"erreur de memoire"<< std::endl ;
	int i;
	for (i = 0; i < 8; i++)
	{
		std::cout <<"carte invalide.. "<< std::endl ;
		usleep(500000); 
		io->led_defaut=OFF;
		usleep(500000); 
		io->led_defaut=val;
	}
}
 
void Voyants::set_dispo(led val)
{
	if(io == NULL)  std::cout <<"erreur de memoire"<< std::endl ;
	io->led_dispo=val;
}

void Voyants::blink_charge(led val)
{
	if(io == NULL)  std::cout <<"erreur de memoire"<< std::endl ;

	for (int i = 0; i < 8; i++)
	{
		std::cout <<"Blink Charge.. "<< std::endl ;
		usleep(500000); 
		io->led_charge=OFF;
		usleep(500000); 
		io->led_charge=val;
	}	
}



