#include <stdio.h>

int main() {
    int a, b;
    int resultat = 1;

    // Saisie de a
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    // Saisie de b
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    // Calcul de a^b
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
