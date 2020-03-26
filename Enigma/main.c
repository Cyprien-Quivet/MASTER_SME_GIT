
/* Includes ------------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "enigma.h"
#include "ihm.h"



char alphabet[] = {'A', 'B','C', 'D', 'E', 'F', 'G','H', 'I', 'J','K', 'L','M', 'N', 'O','P', 'Q', 'R', 'S','T', 'U','V', 'W', 'X', 'Y', 'Z'};
// DESCRIPTION DES 5 ROTORS 
char rotor_1[] ={'E', 'K','M', 'F', 'L', 'G', 'D','Q', 'V', 'Z','N', 'T','O', 'W', 'Y','H', 'X', 'U', 'S','P', 'A','I', 'B', 'R', 'C', 'J'};
char rotor_2[] ={'A', 'J','D', 'K', 'S', 'I', 'R','U', 'X', 'B','L', 'H','W', 'T', 'M','C', 'Q', 'G', 'Z','N', 'P','Y', 'F', 'V', 'O', 'E'};
char rotor_3[] ={'B', 'D','E', 'F', 'H', 'J', 'L','C', 'P', 'R','T', 'X','V', 'Z', 'N','Y', 'E', 'I', 'W','G', 'A','K', 'M', 'U', 'S', 'Q'};
char rotor_4[] ={'E', 'S','O', 'V', 'P', 'Z', 'J','A', 'Y', 'Q','U', 'I','R', 'H', 'X','L', 'N', 'F', 'T','G', 'K','D', 'C', 'M', 'W', 'B'};
char rotor_5[] ={'V', 'Z','B', 'R', 'G', 'I', 'T','Y', 'U', 'P','S', 'D','N','H', 'L', 'X','A', 'W', 'M', 'J','Q', 'O','F', 'E', 'C', 'K'};

// DESCRIPTION DES 2 REFLECTEURS

char reflecteur_a[] = {'Y', 'R','U', 'H', 'Q', 'S', 'L','D', 'P', 'X','N', 'G','O', 'K', 'M','I', 'E', 'B', 'F','Z', 'C','W', 'V', 'J', 'A', 'T'};

char reflecteur_b[] = {'R', 'D','O', 'B', 'J', 'N', 'T','K', 'V','E', 'H','M', 'L','F', 'C', 'W','Z', 'A', 'X', 'G','Y', 'I','P', 'S', 'U', 'Q'};



int main(){

char  R1[26],R2[26],R3[26]; 
char P1, P2, P3;
char a, b, c;
// TEST

   printf("********* SELECTION DU PREMIER ROTOR ******** \n");
ROTOR_SELECTION(rotor_1, rotor_2,rotor_3, rotor_4, rotor_5, R1);
    printf("********* SELECTION DU DEUXIEME ROTOR ******** \n");
ROTOR_SELECTION(rotor_1, rotor_2,rotor_3, rotor_4, rotor_5, R2);
    printf("********* SELECTION DU TROISIEME ROTOR ******** \n");
ROTOR_SELECTION(rotor_1, rotor_2,rotor_3, rotor_4, rotor_5, R3);

    printf("********* POSITION INITIALE DU PREMIER ROTOR :  ******** \n");
    scanf("%c", &P1);
    printf("********* POSITION INITIALE DU DEUXIEME ROTOR :  ******** \n");
    scanf("%c", &P2);
     printf("********* POSITION INITIALE DU TROISIEME ROTOR :  ******** \n");
    scanf("%c", &P3);
// reprendre juste au dessus --> probleme


    a = ROTOR_CHERCHE_INDEX(R1, transformation_lettre_TO_NUMBER(P1));
    POSITION_INITIAL_ROTOR(R1, (int)a);
    b = ROTOR_CHERCHE_INDEX(R2, transformation_lettre_TO_NUMBER(P2));
    POSITION_INITIAL_ROTOR(R2, (int)b);
    c = ROTOR_CHERCHE_INDEX(R3, transformation_lettre_TO_NUMBER(P3));
    POSITION_INITIAL_ROTOR(R3, (int)c);


    for(int i= 0; i<26; i++){



      printf( "rotor3[%d] = %c \n", i, R3[i]);
    }

  return 0; 
}