
#ifndef GENERATEUR_SAVE
#define GENERATEUR_SAVE
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h
#include "prise.h"
#include "voyants.h"
#include "lecteurcarte.h"
#include "boutons.h"
#include "prise.h"

class LecteurCarte;
/*!
* \file generateur.h
* \brief Classe qui permet de traiter les divers signaux d'entrées et sorties telles que les informations de températures et les actionneurs.
* \author JENN ALET et QUIVET
*/
class Generateur
{
       private : 
	Boutons &boutons;
	Voyants &voyants;
	Prise &prise;
	LecteurCarte &lc;
	

    public:
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
* \param num_client : Entier non signé contenant le numéro du client.
*/
	unsigned short int num_client; //numéro de la carte du client
/*!
* \brief Constructeur
*
* Constructeur de la classe Generateur
*
* \param constructeur : lecteur (objet de type LecteurCarte), voyants (objet de type Voyants), prise (objet de type Prise) et boutons (objet de type Boutons)
*/
	 Generateur(LecteurCarte &lecteur , Voyants &voyants, Prise &prise, Boutons &boutons );
    /*!
* \brief Initialisation du Générateur Save
*
* Methode qui permet d'initialiser le générateur Save
*
* \param sans paramètre
*/
        void generateursave_initialiser();
/*!
* \brief Charger batterie
*
* Méthode contenant une machine à états pour permettre le rechargement de la batterie 
*
* \param etat_initial : entier contenant l'état initial de la machine à état
*/
        void charger_batterie(int etat_initial);
/*!
* \brief Générer PWM
*
* Méthode permettant de générer un signal PWM. 
*
* \param val : variable de type pwm
*/
        void generer_PWM(pwm val);
/*!
* \brief Tension
*
* Methode qui permet de retourner la valeur de la tension
* \param sans paramètre
* \return Retourne la valeur de la tension
*/
        float tension();
/*!
* \brief Charger 
*
* Methode qui permet de retourner la valeur de la tension
* \param sans paramètre
* \return Retourne la valeur de la tension
*/
        void charger();
/*!
* \brief Charger 
*
* Methode qui permet de retourner la valeur de la tension
* \param sans paramètre
* \return Retourne la valeur de la tension
*/
        void ouvrir_AC();
/*!
* \brief fermer 
*
* Methode qui permet fermer le contacteur AC
* \param sans paramètre
* \return sans paramètre
*/
        void fermer_AC();
/*!
* \brief Déconnecter
*
* Methode qui permet de deconnecter la voiture de la borne de recharge
* \param sans paramètre
* \return sans paramètre
*/
        void deconnecter();
};

#endif

