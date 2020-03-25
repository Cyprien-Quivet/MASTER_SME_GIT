#if !defined(enigma)
#define enigma

#include <stdlib.h>
#include <stdio.h>

char transformation_lettre_TO_NUMBER( char letter);
void LETTERS_TO_NUMBERS_ROTORS_AND_REFLECTEURS( char *rotor1 ,char *rotor2,char *rotor3,char *rotor4,char *rotor5, char *reflecteur1, char *reflecteur2 );
void DECALAGE_ROTOR_GAUCHE( char rotor[]);
void POSITION_INITIAL_ROTOR(char rotor[], int position_initiale);
char VALEUR_APRES_CABLAGE_DE_DEPART( int valeur, char cable[]);
char PASSAGE_DANS_ROTOR(char rotor[], char valeur);
char PASSAGE_DANS_REFLECTEUR(char reflecteur[], char valeur);
char INVERSE_ROTOR(char rotor[], char valeur);



#endif // enigma


