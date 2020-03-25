#include "ihm.h"




// Choix du rotor 

void ROTOR_SELECTION( char rotor1[] ,char rotor2[],char rotor3[],char rotor4[],char rotor5[], char rotor_select[])
{    int select =0;

    while((select <1) ||(select > 5)){
    printf("ENTREZ LE NUMERO DU ROTOR : \n");
    scanf("%d", &select);
    }
    switch (select)
    {
    case 1:
for(int i=0; i<26;i++)
{
    rotor_select[i] = rotor1[i];
}     
   break;
    
    case 2:
for(int i=0; i<26;i++)
{
    rotor_select[i] = rotor2[i];
}           break;

    case 3:
for(int i=0; i<26;i++)
{
    rotor_select[i] = rotor3[i];
}           break;

    case 4:
for(int i=0; i<26;i++)
{
    rotor_select[i] = rotor4[i];
}           break;

    case 5:
for(int i=0; i<26;i++)
{
    rotor_select[i] = rotor5[i];
}           break;
    
    default: 

        break;
    }
}


// Choix du reflecteur 

void REFLECTEUR_SELECTION( char reflecteur1[] ,char reflecteur2[],char reflecteur_select[]){

 char select ='Z';

    while((select !='A') && (select != 'B')){
    
    printf("ENTREZ LE NUMERO DU REFLECTEUR :  A  OU  B  \n");
    scanf("%c", &select);
    }
      switch (select)
    {
    case 'A':
for(int i=0; i<26;i++)
{
    reflecteur_select[i] = reflecteur1[i];
}     
   break;
    
    case 'B':
for(int i=0; i<26;i++)
{
    reflecteur_select[i] = reflecteur2[i];
}           break;

    default: 

        break;
    }
}





void CONFIG_CABLAGE_DEPART(char cablage[])
{        int j = 0;

    char saisie[17];
    printf("ENTREZ LES 6 PAIRES DE LETTRES RELIEES :  (SOUS LA FORME:  XX-VV-SS-AA-ZZ-EE \n");
    scanf("%s", saisie);
    for(int i =0; i< 17;i++)
    {
        if(saisie[i] != '-')
        {
            cablage[j] = saisie[i];
             j++;
        }
    }

        for(int i =0; i< 13;i++)
         {
        transformation_lettre_TO_NUMBER(cablage[i]);
        }
}


char ROTOR_CHERCHE_INDEX(char rotor[], char lettre){
    char returned_valeur =-1;

    for(int i= 0; i< 26; i++){


        if(lettre  == rotor[i] ){

                returned_valeur = (char)i;

        }
    }
return returned_valeur;
}
