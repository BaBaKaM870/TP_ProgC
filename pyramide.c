#include <stdio.h>

int main() {
    int n;
    int i, j;

    // Saisie de la hauteur
    printf("Entrez la hauteur de la pyramide : ");
    scanf("%d", &n);

    printf("\nPyramide de hauteur %d :\n\n", n);

    // Boucle principale : chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Affichage des espaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
