#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
int main(int argc, char *argv[]){ //vérification que le nombre de paramètres est le bon
if(argc != 3){
printf("Erreur. Les arguments sont invalides\n");
return 1 ;
}
return 0 ;
}
