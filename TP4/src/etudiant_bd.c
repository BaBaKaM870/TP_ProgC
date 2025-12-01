
#include <stdio.h>
#include <string.h>
#include "fichier.h"

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    int note1;
    int note2;
} Etudiant;

int main() {
    Etudiant etudiants[5];
    char ligne[300];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%d", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%d", &etudiants[i].note2);

        // Formatage de la ligne pour le fichier
        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%d;%d",
                 etudiants[i].nom,
                 etudiants[i].prenom,
                 etudiants[i].adresse,
                 etudiants[i].note1,
                 etudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("\nLes détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");
    printf("\n--- Contenu du fichier ---\n");
    lire_fichier("etudiant.txt");

    return 0;
}
