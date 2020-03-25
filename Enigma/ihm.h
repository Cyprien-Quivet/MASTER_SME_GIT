#if !defined(ihm)
#define ihm

#include "enigma.h"
#include <stdlib.h>
#include <stdio.h>




void ROTOR_SELECTION( char rotor1[] ,char rotor2[],char rotor3[],char rotor4[],char rotor5[], char rotor_select[]);
void REFLECTEUR_SELECTION( char reflecteur1[] ,char reflecteur2[],char reflecteur_select[]);
void CONFIG_CABLAGE_DEPART(char cablage[]);
char ROTOR_CHERCHE_INDEX(char rotor[], char lettre);


#endif // enigma
