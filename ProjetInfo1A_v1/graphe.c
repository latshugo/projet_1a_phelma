#include "liste.h"
#include "graphe.h"

#include <stdio.h>
#include <stdlib.h>

//__________________________________________ retourne un graphe vide ________________________________________


Graphe_t cree_graphe(){
	return NULL;
}

//__________________________________________ affiche un graphe ________________________________________


void affiche_graphe(Graphe_t G){

	Liste_t L;
	int i;
	for (i = 0; i < G->nbVilles; i++) {
		printf("Numero : %d, Nom : %s\n",G->tabVille[i].numero,G->tabVille[i].nom); //affichage du numero et du nom
		printf("Liste des voisins :\n");
		for (L = G->tabVille[i].ptrVoisins; L != NULL; L = L->suiv) {
			printf("Ville_depart : %d, Ville_arrivee : %d, Cout : %d, Pheromones : %d\n",L->val.ville_depart,L->val.ville_arrivee,L->val.cout,L->val.pheromones);
		}
	}

}


//______________________________________ test si x et y sont voisines ________________________________________

/*
int voisin(Graphe_t G, Ville_t x, Ville_t y){
	int i;
	for(i=0;i<G->nbVilles; i++){ //on regrde si la ville x est dans le tableau des villes
		if ((G->(tabVille+i))==x) {
			Ville_t voisine;
			do{ //on regarde si y est danc ces voisins, pour cela on parcours tous les ptrVoisins
			voisine=G->(tabVille+i)->ptrVoisins;
			if(voisine->numero==y->numero) return 1;
			}while(voisine==NULL);
			return 0;
		}
	}	
	return 0;	
}


//__________________________________ retourne la liste des voisins de x ______________________________________


Liste_t voisins(Graphe_t G, Ville_t x){
	Liste_t listeVoisins= creer_liste();
	int i;
	for(i=0;i<G->nbVilles; i++){ //on regrde si la ville x est dans le tableau des villes
		if ((G->(tabVille+i))==x) {
			Ville_t voisine;
			do{ //on implémente la liste avec tous les voisins
			listeVoisins=ajout_tete(listeVoisins,G->(tabVille+i)->ptrVoisins);
			}while(voisine==NULL);
			return listeVoisins;
		}
	}	
	return listeVoisins;	
	
}


//_______________________ ajoute la ville x à G si elle n’est pas déjà présente________________________________


Graphe_t ajoute_noeud(Graphe_t G, Ville_t x){


}


//___________________________ supprime la ville x si elle est présente dans G _______________________________


Graphe_t supprime_noeud(Graphe_t G, Ville_t x){


}

//_____________________________ ajoute un arc entre x et y s’il est absent _________________________________


Graphe_t ajoute_arc(Graphe_t G, Ville_t x, Ville_t y){

}


//_____________________________ supprime l'arc entre x et y s’il est présent _______________________________


Graphe_t supprime_arc(Graphe_t G, Ville_t x, Ville_t y){

}


//________________________________ retourne le coût de l’arc entre x et y __________________________________


int valeur_arc(Graphe_t G, Ville_t x, Ville_t y){

}

*/

