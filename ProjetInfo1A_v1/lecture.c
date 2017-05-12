int charger_graphe(char* filename, Graphe_t *ptrGraphe) {

/*_______________________________________________ATTENTION____________________________________

Sous windows, le retour ligne est symbolisé par \r\n alors que sous Unix, c'est uniquement \n
_______________________________________________________________________________________________

*/


	FILE* fichier = NULL;
	fichier = fopen("filename", "r");


	int nb_sommet, nb_arete;

	/* Ces deux chaines de caractere ne servent à rien*/
	char chaine_sommet[30];
	char chaine_arete[30];


	    if (fichier != NULL)
			{
				// On peut lire

				//Lecture du nombre de sommets puis nombre d'arretes_____Premiere Ligne
				fscanf(fichier, "%d %d %[^\n]", & nb_sommet, nb_arete);
				// Saut de ligne ?
				fgets(chaine_sommet, strlen(chaine_sommet,fichier));

				int i;
				char nom_sommet[512] ;
				int numero;
				double x,y; // Les coordonees du sommet pour l'affichage graphique


				for(i=0;i<nb_sommet,i++){
					fscanf(fichier,"%d %lf %lf %[^\n] ",&numero,&x,&y,nom_sommet);
					// on affecte le sommet au graphe
					strncpy(G.tabVille[i].nom, nom_sommet, 511);
					G.tabVille[i].numero = i;

					// ajoute_noeud(Graphe_t G, Ville_t x);
				}
				// Saut de ligne ?
				fgets(chaine_arete, strlen(chaine_arete, fichier));

				int noeud1,noeud2;
				double valeur;
				for(i=0;i<nb_arete,i++){
					fscanf(fichier,"%d %d %lf %[^\n] ",&noeud1,&noeud2,&valeur);
					// On affecte l'arete au graphe
					//ajoute_arc(Graphe_t G, Arc_t A);
					Arc_t arc_cree;
					arc_cree.ville_depart = noeud1;
					arc_cree.ville_arrive = noeud2;
					arc_cree.cout = valeur;
					G.tabVille[noeud1].ptrVoisins = ajout_tete(G.tabVille[noeud1].ptrVoisins, &arc_cree);
				}
					fclose(fichier);

			}
			else
			{
				// On affiche un message d'erreur si on veut
				printf("Impossible d'ouvrir le fichier test.txt");
				return 1;
			}
return 0;
}
