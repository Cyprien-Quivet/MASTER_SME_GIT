#include "enigma.h"



char transformation_lettre_TO_NUMBER( char letter){
char number  = -1;
if(letter == 'A') number  = 0;
if(letter == 'B') number  = 1;
if(letter == 'C') number  = 2;
if(letter == 'D') number  = 3;
if(letter == 'E') number  = 4;
if(letter == 'F') number  = 5;
if(letter == 'G') number  = 6;
if(letter == 'H') number  = 7;
if(letter == 'I') number  = 8;
if(letter == 'J') number  = 9;
if(letter == 'K') number  = 10;
if(letter == 'L') number  = 11;
if(letter == 'M') number  = 12;
if(letter == 'N') number  = 13;
if(letter == 'O') number  = 14;
if(letter == 'P') number  = 15;
if(letter == 'Q') number  = 16;
if(letter == 'R') number  = 17;
if(letter == 'S') number  = 18;
if(letter == 'T') number  = 19;
if(letter == 'U') number  = 20;
if(letter == 'V') number  = 21;
if(letter == 'W') number  = 22;
if(letter == 'X') number  = 23;
if(letter == 'Y') number  = 24;
if(letter == 'Z') number  = 25;

return number;
}


// Transformation des rotors et des reflecteurs en valeurs numériques 
void LETTERS_TO_NUMBERS_ROTORS_AND_REFLECTEURS( char rotor1[] ,char rotor2[],char rotor3[],char rotor4[],char rotor5[], char reflecteur1[], char reflecteur2[] ){
int i =0; 


for( i=0; i<26; i++){

rotor1[i] = transformation_lettre_TO_NUMBER(rotor1[i]);
rotor2[i] = transformation_lettre_TO_NUMBER(rotor2[i]);
rotor3[i] = transformation_lettre_TO_NUMBER(rotor3[i]);
rotor4[i] = transformation_lettre_TO_NUMBER(rotor4[i]);
rotor5[i] = transformation_lettre_TO_NUMBER(rotor5[i]);
reflecteur1[i] = transformation_lettre_TO_NUMBER(reflecteur1[i]);
reflecteur1[i] = transformation_lettre_TO_NUMBER(reflecteur1[i]);
}

}

// FONCTION QUI RETOURNE LE ROTOR APRES LE DECALAGE DUN RANG VERS LA GAUCHE
void DECALAGE_ROTOR_GAUCHE( char rotor[]){

    int a = rotor[25];
    rotor[25] = rotor[0];
    for(int i=0; i<26;i++)
    {
        rotor[i] = rotor[i+1];
        rotor[24] = a;
    }
}


// FONCTION QUI RETOURNE LE ROTOR APRES AVOIR DEFINIT SA POSITION INITIAL

void POSITION_INITIAL_ROTOR(char rotor[], int position_initiale){

for(int i=0; i< position_initiale;i++)
{
     DECALAGE_ROTOR_GAUCHE(rotor);
}
}

// FONCTION QUI PERMET DE VERIFIER SI LA LETTRE A CODER EST RELIE PAR UN CABLE 

char VALEUR_APRES_CABLAGE_DE_DEPART( int valeur, char cable[]){
char nouveau = valeur;
int FLAG_NOUVEAU_IN_LIST =0;
int n;

for(int i =0;i<26;i++){

    if(nouveau == cable[i]){
        FLAG_NOUVEAU_IN_LIST = 1;
        n = i;
    } 
}
if(FLAG_NOUVEAU_IN_LIST == 1)
{
    if(n%2 == 0){

        nouveau = cable[n + 1];
    }
    else 
    {
        nouveau = cable[n - 1];
    }
}

return nouveau;


}

char PASSAGE_DANS_ROTOR(char rotor[], char valeur){
return rotor[valeur];

}

char PASSAGE_DANS_REFLECTEUR(char reflecteur[], char valeur){
return reflecteur[valeur];
}

char INVERSE_ROTOR(char rotor[], char valeur){
  char returned_value =0;
    for(int i=0; i<26;i++){
        if(valeur == rotor[i]){
            returned_value =  (char)i;
        }
        
    }

    printf("returned value, %d", returned_value);

    return returned_value;
}