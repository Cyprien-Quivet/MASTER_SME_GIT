#ifndef PRISE
#define PRISE
#include "donnees_borne.h"
#include <iostream>
#include <memoire_borne.h>
#include "prise.h"
#include "voyants.h"
#include "boutons.h"
#include "lecteurcarte.h"


/*!
* \file prise.h
* \brief Classe permettant de gérer les actions sur la prise électrique du véhicule. 
* \author JENN ALET et QUIVET
*/

class Prise
{

 	public : 
/*!
* \brief Constructeur
*
* Constructeur de la classe Prise
*
* \param sans parametre
*/
        Prise();
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
        void set_prise();
/*!
* \brief Attente Prise débranchée 
*
* Methode qui permet d'attentre que l'utilisateur débranche la prise
* \param sans paramètre
*/
        void attente_pdebranche();
};
#endif

