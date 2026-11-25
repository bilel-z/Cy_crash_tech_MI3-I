#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"
#include "year_data.h"
#include "age_data.h"
#include "crash_data.h"
int main(int argc, char *argv[]){ //vérification que le nombre de paramètres est le bon
if(argc != 3){
printf("Erreur. Les arguments sont invalides\n");
return 1 ;
}
// ici on récupère les arguments 
char *mode = argv[1] ;
char *fichier = argv[2] ;
// traitement du fichier en fonction du mode choisi
if(strcmp(mode,"year") == 0){
year_data(fichier) ;
}
else if(strcmp(mode, "age") == 0){
age_data(fichier) ;
}
else if(strcmp(mode, "crash") == 0){
crash_data(fichier) ;
}
else{
printf("Mode n'existe pas. Erreur.\n") ;
return 1 ;
}
return 0 ;
}
