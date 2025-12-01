#include <stdio.h>

#define NB_PHRASES 10
#define MAX_LONGUEUR 200

// Fonction qui compare deux chaînes sans utiliser strcmp
// Retourne 1 si elles sont identiques, 0 sinon
int comparer_chaine(char *s1, char *s2) {
    int i = 0;

    while (1) {
        if (s1[i] != s2[i]) {
            return 0;   // caractères différents
        }
        if (s1[i] == '\0' && s2[i] == '\0') {
            return 1;   // fin des deux chaînes => égales
        }
        i++;
    }
}

int main() {
    char *phrases[NB_PHRASES] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[MAX_LONGUEUR];
    int trouve = 0;

    printf("Entrez la phrase a rechercher :\n");
    fgets(recherche, MAX_LONGUEUR, stdin);

    // Remplacer le \n final par \0 si présent
    int k = 0;
    while (recherche[k] != '\0') {
        if (recherche[k] == '\n') {
            recherche[k] = '\0';
            break;
        }
        k++;
    }

    // Recherche dans le tableau
    for (int i = 0; i < NB_PHRASES; i++) {
        if (comparer_chaine(recherche, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    // Résultat
    if (trouve) {
        printf("Phrase trouvee\n");
    } else {
        printf("Phrase non trouvee\n");
    }

    return 0;
}
