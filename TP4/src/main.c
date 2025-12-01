#include <stdio.h>
#include <string.h>
#include "operator.h"
#include "fichier.h"

#define TAILLE_MESSAGE 1024
#define TAILLE_NOM 256

int main() {
    int choix_menu;

    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Calculatrice\n");
        printf("2. Gestion de fichiers\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix_menu);
        getchar(); // consomme le '\n' laissé par scanf

        switch (choix_menu) {
            case 1: { // Calculatrice
                int num1, num2, resultat;
                char op;

                printf("Entrez num1 : ");
                scanf("%d", &num1);
                printf("Entrez num2 : ");
                scanf("%d", &num2);
                getchar();

                printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
                scanf(" %c", &op);
                getchar();

                switch (op) {
                    case '+': resultat = somme(num1, num2); break;
                    case '-': resultat = difference(num1, num2); break;
                    case '*': resultat = produit(num1, num2); break;
                    case '/': resultat = quotient(num1, num2); break;
                    case '%': resultat = modulo(num1, num2); break;
                    case '&': resultat = et_binaire(num1, num2); break;
                    case '|': resultat = ou_binaire(num1, num2); break;
                    case '~': resultat = negation(num1, num2); break;
                    default: 
                        printf("Operateur invalide !\n");
                        continue; // revient au menu
                }

                printf("Resultat : %d\n", resultat);
                break;
            }

            case 2: { // Gestion de fichiers
                int choix_fichier;
                char nom_de_fichier[TAILLE_NOM];
                char message[TAILLE_MESSAGE];

                printf("\n1. Lire un fichier\n");
                printf("2. Écrire dans un fichier\n");
                printf("3. Retour au menu principal\n");
                printf("Votre choix : ");
                scanf("%d", &choix_fichier);
                getchar();

                switch (choix_fichier) {
                    case 1:
                        printf("Entrez le nom du fichier à lire : ");
                        fgets(nom_de_fichier, TAILLE_NOM, stdin);
                        nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';
                        lire_fichier(nom_de_fichier);
                        break;
                    case 2:
                        printf("Entrez le nom du fichier : ");
                        fgets(nom_de_fichier, TAILLE_NOM, stdin);
                        nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';
                        printf("Entrez le message à écrire : ");
                        fgets(message, TAILLE_MESSAGE, stdin);
                        message[strcspn(message, "\n")] = '\0';
                        ecrire_dans_fichier(nom_de_fichier, message);
                        break;
                    case 3:
                        break; // revient au menu principal
                    default:
                        printf("Choix invalide.\n");
                }
                break;
            }

            case 3:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide. Réessayez.\n");
        }

    } while (choix_menu != 3);

    return 0;
}
