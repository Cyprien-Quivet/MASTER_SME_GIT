#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <iostream>
#include <lcarte.h>
#include <unistd.h>
#include <donnees_borne.h>
#include <memoire_borne.h>
#include "base_donnee.h"
#include "voyants.h"
#include "boutons.h"
#include "generateur_save.h"
#include "prise.h"
#include "lecteurcarte.h"


//class Generateur;



/*!
* \file lecteurcarte.h
* \brief Classe permettant de gérer le lecteur de carte qui permet au client d'insérer sa carte abonné. 
* \author JENN ALET et QUIVET
*/
class LecteurCarte
{

	private : 
	Boutons &boutons;
	Voyants &voyants;
	BaseDonnee &basedonnee;
	Prise &prise;
	Generateur *gene;


 	
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
* \brief Constructeur
*
* Constructeur de la classe LecteurCarte
*
* \param constructeur : bouton (objet de type Boutons), voyants (objet de type Voyants), bd (objet de type BaseDonnee) et prise (objet de type Prise)
*/
	LecteurCarte(Boutons &bouton ,Voyants &voyant ,BaseDonnee &bd ,Prise &p);

/*!
* \brief Lire la carte d'un client
*
* Methode qui permet de lire le numéro de la carte d'un client.
* \param sans paramètre
*/
	void lecteurcarte_lire_carte();
/*!
* \brief Relire la carte d'un client
*
* Methode qui permet de relire le numéro de la carte d'un client.
* \param sans paramètre
*/
	void lecteurcarte_relire_carte();
/*!
* \brief Ajouter une carte 
*
* Methode qui permet d'ajouter la carte lu par le lecteur carte à la base de données clients.
* \param sans paramètre
*/
	void _lire_carte_ajouter();
/*!
* \brief Supprimer une carte 
*
* Methode qui permet de supprimer la carte lu par le lecteur carte à la base de données clients.
* \param sans paramètre
*/
	void _lire_carte_supprimer();
/*!
* \brief Lire la carte d'un client
*
* Methode qui permet de lire le numéro de la carte d'un client.
* \param sans paramètre
*/
	void lire_carte();
/*!
* \brief Fonction de connection de classes
*
* Methode qui permet de connecter la classe Generateur et LecteurCarte
* \param sans paramètre
*/
	void connect_gene(Generateur *g) {gene=g;}
};

#endif // LECTEURCARTE_H
