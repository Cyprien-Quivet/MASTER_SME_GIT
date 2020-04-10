#ifndef PRISE
#define PRISE
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "voyants.h"



/*!
* \file prise.h
* \brief Classe permettant de gérer les actions sur la prise électrique du véhicule. 
* \author JENN ALET et QUIVET
*/

class Prise
{


 	public : 

        Voyants &voyant;
        

        entrees *io;
        int depart_timer;
	int shmid;
/*!
* \brief Constructeur
*
* Constructeur de la classe Prise
*
* \param sans parametre
*/
        Prise(Voyants &voyant);
/*!
* \brief Déverrouiller la trappe de la prise
*
* Methode qui permet de déverrouiller la trappe de la prise.
* \param sans paramètre
*/
        void deverouiller_trappe();
/*!
* \brief Verrouiller la trappe de la prise
*
* Methode qui permet de verrouiller la trappe de la prise.
* \param sans paramètre
*/
        void verouiller_trappe();
/*!
* \brief Set Prise (à completer )
*
* Methode qui permet de ?????
* \param sans paramètre
*/
        void set_prise(led val);
/*!
* \brief Attente Prise débranchée 
*
* Methode qui permet d'attentre que l'utilisateur débranche la prise
* \param sans paramètre
*/
        void attente_pdebranche();
};
#endif

