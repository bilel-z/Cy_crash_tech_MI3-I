#ifndef crashdata.h
#define crashdata.h
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int id;
    int equilibre;
    struct avl_crash* pGauche;
    struct avl_crash* pDroit;
    vehicule*pListeVehicules;
}avl_crash;

typedef struct{
    int vehicule;
    int purpose;
    struct vehicule*pnext;
    victime*pListevictimes;
}vehicule;

typedef struct{
    int type;
    int genre;
    struct victime*pnext;
    int age;
    int gravité;
}victime;

