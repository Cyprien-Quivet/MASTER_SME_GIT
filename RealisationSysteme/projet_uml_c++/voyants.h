

#ifndef VOYANTS_H
#define VOYANTS_H
#include <iostream>
#include <lcarte.h>
#include <unistd.h>
#include "donnees_borne.h"
#include "memoire_borne.h"

/*!
* \file voyants.h
* \brief Classe permettant de gérer les voyants présents l'IHM de la borne. 
* \author JENN ALET et QUIVET
*/


class Voyants
{


 	public : 

/*!
* \param *io : Pointeur de type entrees
*/
	entrees *io;
	int shmid;
/*!
* \param depart_timer : Variable de type entier utile pour pouvoir lancer un timer.
*/
	int depart_timer;

/*!
* \param num_client : Variable de type entier non signé utile pour mémoriser le numéro de la carte que le client à inséré.
*/
	unsigned short int num_client; //numéro de la carte du client
/*!
* \brief Constructeur de la classe Voyants
*
* \param sans paramètre
*/
	Voyants();

/*!
* \brief Set charge (à completer )
*
* Methode qui permet de ?????
* \param sans paramètre
*/
	void set_charge(led val);
/*!
* \brief Set dispo (à completer )
*
* Methode qui permet de ?????
* \param sans paramètre
*/
	void set_dispo(led val);
	void blink_charge(led val);
	void set_defaut(led val);
	void set_defautOFF(led val);
};

#endif // LECTEURCARTE_H
