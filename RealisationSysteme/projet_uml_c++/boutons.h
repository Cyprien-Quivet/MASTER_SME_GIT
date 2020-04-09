#ifndef BOUTONS_H
#define BOUTONS_H
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "timer.h"

/*!
* \file boutons.h
* \brief Classe permettant à l'utilisateur d'intéragir avec les boutons de l'IHM.
* \author JENN ALET et QUIVET
*/
class Boutons
{	private :

/*!
* \brief Objet de type Timer
*
* Création d'un objet Timer de type Timer 
*
*/
	Timer timer;

  	public : 
/*!
* \param *io : Pointeur de type entrees
*/
	entrees *io;

	int shmid;
/*!
* \param depart_timer : Entier permettant utilise pour lancer le timer.
*/
	int depart_timer;
/*!
* \brief Constructeur de classe
*
*Constructeur sans paramètre.

*/
	Boutons();
/*!
* \brief Appuie sur bouton charge
*
* Methode qui permet de savoir si l'utilisateur appuie sur le bouton charge. ( L'utilisateur dispose de 1 min pour appuyer sur le bouton).
* \param sans paramètre
* \return Retourne 1 si le bouton est actionné, 0 sinon.
*/
	int charge();
/*!
* \brief Appuie sur bouton stop
*
* Methode qui permet de savoir si l'utilisateur appuie sur le bouton stop.
* \param sans paramètre
* \return Retourne 1 si le bouton est actionné, 0 sinon.
*/
	int stop();
};

#endif 
