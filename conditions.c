#include <stdio.h>

int main() {
    int somme = 0;
    int dernier_nombre = 0;
    
    printf("=== Programme de calcul de somme avec conditions ===\n\n");
    printf("Parcours des nombres de 1 à 1000...\n\n");
    
    // Boucle for de 1 à 1000
    for (int i = 1; i <= 1000; i++) {
        
        // Si le nombre est divisible par 11, on passe au suivant
        if (i % 11 == 0) {
            printf("Nombre %d : divisible par 11 -> ignoré (continue)\n", i);
            continue;
        }
        
        // Si le nombre est divisible par 5 ou par 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
            printf("Nombre %d : ajouté à la somme -> somme actuelle = %d\n", i, somme);
            
            // Si la somme dépasse 5000, on arrête la boucle
            if (somme > 5000) {
                dernier_nombre = i;
                printf("\n*** ALERTE : La somme a dépassé 5000 ! ***\n");
                printf("*** Arrêt de la boucle avec break ***\n\n");
                break;
            }
        }
    }
    
    // Affichage du résultat final
    printf("=== RÉSULTAT FINAL ===\n");
    printf("Somme finale : %d\n", somme);
    
    if (dernier_nombre > 0) {
        printf("La boucle s'est arrêtée au nombre : %d\n", dernier_nombre);
        printf("Raison : la somme a dépassé 5000\n");
    } else {
        printf("La boucle s'est terminée normalement (tous les nombres de 1 à 1000 ont été parcourus)\n");
    }
    
    printf("\n=== Programme terminé avec succès ===\n");
    
    return 0;
}
