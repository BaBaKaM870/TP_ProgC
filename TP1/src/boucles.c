#include <stdio.h>

// Fonction pour afficher le triangle avec des boucles for
void afficher_triangle_for(int compteur) {
    printf("=== Triangle avec boucles FOR ===\n");
    
    // Boucle pour chaque ligne
    for (int i = 1; i <= compteur; i++) {
        // Boucle pour chaque colonne de la ligne
        for (int j = 1; j <= i; j++) {
            // Première et dernière position : afficher *
            if (j == 1 || j == i) {
                printf("* ");
            }
            // Dernière ligne : tout en *
            else if (i == compteur) {
                printf("* ");
            }
            // Positions intérieures : afficher #
            else {
                printf("# ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Fonction pour afficher le triangle avec des boucles while
void afficher_triangle_while(int compteur) {
    printf("=== Triangle avec boucles WHILE ===\n");
    
    int i = 1;
    // Boucle while pour chaque ligne
    while (i <= compteur) {
        int j = 1;
        // Boucle while pour chaque colonne de la ligne
        while (j <= i) {
            // Première et dernière position : afficher *
            if (j == 1 || j == i) {
                printf("* ");
                j++;
                continue;
            }
            // Dernière ligne : tout en *
            if (i == compteur) {
                printf("* ");
                j++;
                continue;
            }
            // Positions intérieures : afficher #
            printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}

// Fonction pour afficher le triangle avec des boucles do-while
void afficher_triangle_do_while(int compteur) {
    printf("=== Triangle avec boucles DO-WHILE ===\n");
    
    int i = 1;
    // Boucle do-while pour chaque ligne
    do {
        int j = 1;
        // Boucle do-while pour chaque colonne de la ligne
        do {
            // Première et dernière position : afficher *
            if (j == 1 || j == i) {
                printf("* ");
            }
            // Dernière ligne : tout en *
            else if (i == compteur) {
                printf("* ");
            }
            // Positions intérieures : afficher #
            else {
                printf("# ");
            }
            j++;
        } while (j <= i);
        
        printf("\n");
        i++;
    } while (i <= compteur);
    
    printf("\n");
}

int main() {
    int compteur;
    
    printf("=== Programme de Triangle Rectangle ===\n\n");
    printf("Entrez la taille du triangle (< 10) : ");
    fflush(stdout);  // Force l'affichage immédiat
    scanf("%d", &compteur);
    
    // Validation de l'entrée
    if (compteur >= 10 || compteur < 1) {
        printf("Erreur : Le compteur doit être strictement inférieur à 10 et supérieur à 0.\n");
        return 1;
    }
    
    printf("\n");
    
    // Affichage avec boucle for
    afficher_triangle_for(compteur);
    
    // Affichage avec boucle while
    afficher_triangle_while(compteur);
    
    // Affichage avec boucle do-while
    afficher_triangle_do_while(compteur);
    
    printf("=== Programme terminé avec succès ===\n");
    
    return 0;
}
