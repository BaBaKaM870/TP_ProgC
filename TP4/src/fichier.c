
#include <stdio.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);
    int c;
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a"); // mode append
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s en écriture\n", nom_de_fichier);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);
}
