#ifndef _GRAPHE
#define _GRAPHE

#include "liste.h"

#include <stdio.h>
#include <string.h>


typedef struct{
	int numero;
	char nom[512];
	Liste_t *ptrVoisins;
} Ville_t;


struct cell{
	Ville_t *tabVille;
	int nbVilles;
} ;

typedef struct cell * Graphe_t;


Graphe_t cree_graphe();
void affiche_graphe(Graphe_t G);


#endif
