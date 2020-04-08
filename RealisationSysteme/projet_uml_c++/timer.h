#ifndef TIMER_H
#define TIMER_H
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "lecteurcarte.h"

class Timer
{

/*!
* \file timer.h
* \brief Classe permettant de gérer les temporisations présentent dans le cahier des charges. 
* \author JENN ALET et QUIVET
*/


/*!
* \param *io : Pointeur de type entrees
*/	
	entrees *io;
	int shmid;

/*!
* \param depart_timer : Variable de type entier utile pour pouvoir lancer un timer.
*/
	int depart_timer;

 	 public : 
/*!
* \brief Constructeur de la classe Timer
*
* \param sans paramètre
*/
 	 Timer();

/*!
* \brief Remise à zéro du timer
*
* Methode qui permet de remettre à zéro le timer.
* \param sans paramètre
*/
 	 void raz();

/*!
* \brief Valeur timer
*
* Methode qui permet de connaitre la valeur renvoyée par le timer.
* \return Retourne un entier avec la valeur du timer.
*/
   	 int valeur();
};

#endif // TIME_H
