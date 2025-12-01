#include <stdio.h>

int main() {
    int n;
    
    printf("=== Génération de la Suite de Fibonacci ===\n\n");
    printf("Entrez le nombre de termes à générer (n) : ");
    fflush(stdout);
    scanf("%d", &n);
    
    // Validation de l'entrée
    if (n < 0) {
        printf("Erreur : n doit être un nombre positif ou nul.\n");
        return 1;
    }
    
    printf("\nSuite de Fibonacci jusqu'à U%d :\n", n);
    
    // Cas particuliers pour n = 0 et n = 1
    if (n == 0) {
        printf("U0 = 0\n");
        return 0;
    }
    
    // Initialisation des deux premiers termes
    long long u0 = 0;
    long long u1 = 1;
    
    // Affichage de U0
    printf("U0 = %lld\n", u0);
    
    if (n >= 1) {
        // Affichage de U1
        printf("U1 = %lld\n", u1);
    }
    
    // Calcul et affichage des termes suivants
    for (int i = 2; i <= n; i++) {
        long long un = u0 + u1;
        printf("U%d = %lld\n", i, un);
        
        // Préparation pour l'itération suivante
        u0 = u1;
        u1 = un;
    }
    
    // Affichage de la suite complète sur une ligne
    printf("\nSuite complète : ");
    
    u0 = 0;
    u1 = 1;
    
    printf("%lld", u0);
    
    if (n >= 1) {
        printf(", %lld", u1);
    }
    
    for (int i = 2; i <= n; i++) {
        long long un = u0 + u1;
        printf(", %lld", un);
        u0 = u1;
        u1 = un;
    }
    
    printf("\n\n=== Programme terminé avec succès ===\n");
    
    return 0;
}
