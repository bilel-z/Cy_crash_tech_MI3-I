#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"
int main(int argc, char *argv[]){ //vérification que le nombre de paramètres est le bon
if(argc != 3){
printf("Erreur. Les arguments sont invalides\n");
return 1 ;
}
// ici on récupère les arguments 
char *mode = argv[1] ;
char *fichier = argv[2] ;
return 0 ;
}
