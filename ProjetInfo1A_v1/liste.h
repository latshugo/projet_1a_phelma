#ifndef _LISTE
#define _LISTE

#include <stdio.h>
#include <string.h>

typedef struct{
	int ville_depart;
	int ville_arrivee;
	int cout;
	int pheromones;
} Arc_t;

struct cellule { 
   Arc_t val;
   struct cellule * suiv;} ;

typedef struct cellule * Liste_t;


Liste_t creer_liste(void);
int est_vide(Liste_t L);
Liste_t rech(Arc_t e, Liste_t L);
Liste_t ajout_tete(Arc_t e, Liste_t L);

#endif
