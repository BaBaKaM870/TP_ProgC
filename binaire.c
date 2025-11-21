#include <stdio.h>

void afficherBinaire(int n) {
    // On affiche 32 bits (format int standard)
    // Le bit de poids fort est testé en premier
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // décalage + masque
        printf("%d", bit);

        // Optionnel : espace toutes les 4 valeurs pour lisibilité
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {

    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %d\nBinaire : ", valeurs[i]);
        afficherBinaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
