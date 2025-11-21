#include <stdio.h>

int main() {
    int n = 5;   // hauteur de la pyramide
    int i, j;

    printf("Pyramide de hauteur %d :\n\n", n);

    // Boucle principale : chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Affichage des espaces (pour centrer)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Nombres croissants : de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Nombres décroissants : de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4) Passage à la ligne suivante
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
