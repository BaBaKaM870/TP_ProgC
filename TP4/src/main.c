#include <stdio.h>
#include <string.h>
#include "operator.h"
#include "fichier.h"  // <-- On inclut ton nouveau fichier d'en-tête

#define TAILLE_MESSAGE 1024
#define TAILLE_NOM 256

int main() {
    int num1, num2;
    char op;
    int resultat;

    // Partie calculatrice existante
    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et_binaire(num1, num2);
            break;
        case '|':
            resultat = ou_binaire(num1, num2);
            break;
        case '~':
            resultat = negation(num1, num2);
            break;
        default:
            printf("Operateur invalide !\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);

    // Partie gestion de fichiers ajoutée
    int choix_fichier;
    char nom_de_fichier[TAILLE_NOM];
    char message[TAILLE_MESSAGE];

    printf("\nVoulez-vous utiliser la gestion de fichiers ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Écrire dans un fichier\n");
    printf("3. Non, quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix_fichier);
    getchar(); // pour consommer le '\n' laissé par scanf

    switch (choix_fichier) {
        case 1:
            printf("Entrez le nom du fichier à lire : ");
            fgets(nom_de_fichier, TAILLE_NOM, stdin);
            nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';
            lire_fichier(nom_de_fichier);
            break;
        case 2:
            printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
            fgets(nom_de_fichier, TAILLE_NOM, stdin);
            nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';

            printf("Entrez le message à écrire : ");
            fgets(message, TAILLE_MESSAGE, stdin);
            message[strcspn(message, "\n")] = '\0';

            ecrire_dans_fichier(nom_de_fichier, message);
            break;
        case 3:
            printf("Fin du programme.\n");
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
