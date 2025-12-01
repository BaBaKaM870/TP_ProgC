#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i;
    int min, max;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Initialisation du min et du max avec la première valeur du tableau
    min = tableau[0];
    max = tableau[0];

    // Recherche du min et du max
    for (i = 1; i < 100; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage des résultats
    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}
