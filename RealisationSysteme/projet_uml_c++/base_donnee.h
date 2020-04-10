#ifndef BASEDONNEE_H
#define BASEDONNEE_H
#include <iostream>
#include <vector>
#include <fstream>


/*!
* \file base_donnee.h
* \brief Gestion de la base de données clients
* \author JENN ALET et QUIVET
*/

class BaseDonnee
{





  public : 

/*!
* \param base_donnes : Variable de type entier. Tableau de données contenant tous les clients enrengistrés.
*/
    //int base_donnes[100];
     std::vector <int> base_donnes;
/*!
* \param i : Entier servant de variable d'incrémentation.
*/
    int i;
/*!
* \param dernier_client : Entier permettant de mémoriser le dernier client ayant utilisé le système de recharge. 
*/
int  dernier_client;
/*!
* \param nb_client : Entier permettant de mémoriser le nombre totale de clients enrengistés. 
*/
int  nb_clients;

/*!
* \brief Constructeur de la classe
*
* Constructeur sans paramètre. 
*/
    BaseDonnee();


/*!
* \brief Authentifier un client
*
* Methode qui permet d'authentifier un client appartenant à la base de données.
*
* \param num_carte : le numéro de la carte que possède le client
* \return 1 si l'authentification réussit, 0 si elle échoue
*/
    int authentifier(unsigned short int num_carte);

/*!
* \brief Ré-Authentifier un client
*
* Methode qui permet de ré-authentifier pour permettre la reprise du véhicule.
*
* \param num_carte : le numéro de la carte que possède le client
* \return 1 si l'authentification réussit, 0 si elle échoue
*/
    int re_authentifier(unsigned short int num_carte);
/*!
* \brief Ajouter un client
*
* Methode qui permet d'ajouter un client à la base de données.
*
* \param num_carte : le numéro de la carte qui sera attribuée au client.
*/
    void ajouter_client(unsigned short int num_carte);
/*!
* \brief Supprimer un client
*
* Methode qui permet de supprimer un client de la base de données.
*
*/
    void supprimer_client(unsigned short int num_carte);
/*!
* \brief Initialiser la base de donnée
*
* Methode qui permet d'initialiser la base de donnée au démarage de l'IHM.
*
*/
    void init_base_client();
/*!
* \brief Afficher la liste client
*
* Methode qui permet d'afficher la liste des clients appartenants à la base de donnée.
*
*/
    void afficher_liste_client() ;


    void ecriture_clients_fichier();

};

#endif // BASEDONNEE_H
