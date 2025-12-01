#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Structure représentant une couleur RGBA (4 octets)
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Structure pour stocker une couleur distincte + son nombre d'occurrences
typedef struct {
    Couleur couleur;
    int occurrences;
} CouleurDistincte;

// Fonction pour comparer deux couleurs
int couleurs_sont_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r &&
            c1.g == c2.g &&
            c1.b == c2.b &&
            c1.a == c2.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[TAILLE];

    int nb_distinctes = 0;
    int trouve;

    srand(time(NULL));

    // Génération aléatoire du tableau de couleurs
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        trouve = 0;

        // Vérifie si la couleur existe déjà dans les couleurs distinctes
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_sont_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].occurrences++;
                trouve = 1;
                break;
            }
        }

        // Si la couleur n'a pas été trouvée, on l'ajoute
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].occurrences = 1;
            nb_distinctes++;
        }
    }

    // Affichage des couleurs distinctes
    printf("Couleurs distinctes et occurrences :\n\n");

    for (int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].occurrences);
    }

    return 0;
}
