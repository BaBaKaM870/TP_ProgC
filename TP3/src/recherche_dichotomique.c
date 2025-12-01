#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, j, temp;
    int valeur;
    int debut, fin, milieu;
    int trouve = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 50
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 101 - 50;
    }

    // Tri du tableau en ordre croissant (tri à bulles)
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - 1 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trie :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // --- Recherche dichotomique ---
    debut = 0;
    fin = TAILLE - 1;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tableau[milieu] == valeur) {
            trouve = 1;
            break;
        } 
        else if (tableau[milieu] < valeur) {
            debut = milieu + 1;
        } 
        else {
            fin = milieu - 1;
        }
    }

    // Résultat
    if (trouve)
        printf("Resultat : entier present\n");
    else
        printf("Resultat : entier absent\n");

    return 0;
}
