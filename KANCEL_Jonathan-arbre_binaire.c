/*
 * =====================================================================================
 *
 *       Filename:  KANCEL_Jonathan-arbre_binaire.c
 *
 *    Description: Programme permettant de créer un arbre binaire en C 
 *
 *        Version:  1.0
 *        Created:  27/10/2021 09:07:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Auteur:  KANCEL Jonathan, kanjo.school@gmail.com
 *   	   Classe:  L3 MIAGE
 * 		  Matiere:  Theorie des Arbres
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
		// Tableaux representant l'arbre binaire
		int n, FG[100], FD[100];
		
		// Definition du nombre de sommets de l'arbre
		printf("Veuillez entrer le nombre de sommets de l'arbre binaire\n");
		scanf(" %d", &n);
		
		// Recuperation des fils
		for (int i=1; i<=n; i++) {
			int filsGauche, filsDroit;
			printf("Veuillez entrer le fils gauche du sommet a l'indice %d\n", i);
			scanf(" %d", &filsGauche);
			printf("Veuillez entrer le fils droit du sommet a l'indice %d\n", i);
			scanf(" %d", &filsDroit);

			FG[i] = filsGauche;
			FD[i] = filsDroit;

			printf("\n");
		}
		
		// Affichage des fils gauches
		printf("\n   ");

		for (int i=1; i<=n; i++) {
			printf("%d ", i);
		}
		
		printf("\nFG ");

		for (int i=1; i<=n; i++) {
			printf("%d ", FG[i]);
		}

		printf("\n");
		
		// Affichage des fils droits
		printf("\n   ");

		for (int i=1; i<=n; i++) {
			printf("%d ", i);
		}
		
		printf("\nFD ");

		for (int i=1; i<=n; i++) {
			printf("%d ", FD[i]);
		}

		return 0;
}
