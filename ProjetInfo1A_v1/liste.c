#include "liste.h"
#include "graphe.h"

#include <stdio.h>
#include <stdlib.h>


//__________________________________________ retourne une liste vide ________________________________________


Liste_t creer_liste(void) {	return NULL;	}


//__________________________________________ test si une liste est vide ________________________________________


int est_vide(Liste_t L) {	return !L;	}


//__________________________________________ ajoute un arc à une liste  ________________________________________


Liste_t ajout_tete(Arc_t e, Liste_t L){ 
  Liste_t p=(Liste_t) calloc(1,sizeof(*p));
  if (p==NULL) return NULL; 
  p->val.ville_depart = e.ville_depart;
  p->val.ville_arrivee = e.ville_arrivee;
  p->val.cout = e.cout;
  p->val.pheromones = e.pheromones;
  p->suiv = L;
  return p;
}


//____________________________________ recherche si un arc est dans une liste _____________________________________

Liste_t rech(Arc_t e, Liste_t L){ 
  Liste_t p=L;
  while(!est_vide(p)&&p->val.ville_depart==e.ville_depart&&p->val.ville_arrivee==e.ville_arrivee)
  p=p->suiv;
  return p;
}

