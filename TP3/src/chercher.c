#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, valeur, trouve = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 50
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 101 - 50;   // valeurs entre -50 et +50
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche de l'entier dans le tableau
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}
