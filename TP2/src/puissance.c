#include <stdio.h>

int main() {
    int a = 2;      // valeur de départ
    int b = 3;      // exposant
    int resultat = 1;   // résultat de a^b

    // Boucle pour calculer a^b
    for (int i = 0; i < b; i++) {
        resultat *= a;   // équivalent à resultat = resultat * a
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
