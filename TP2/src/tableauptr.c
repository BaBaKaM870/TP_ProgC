#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Déclaration des tableaux
    const int TAILLE = 11;
    int tableau_int[11];
    float tableau_float[11];
    
    // Déclaration des pointeurs
    int *ptr_int;
    float *ptr_float;
    
    printf("=======================================================\n");
    printf("    MANIPULATION DE TABLEAUX AVEC POINTEURS\n");
    printf("=======================================================\n\n");
    
    // Initialisation de la graine du générateur de nombres aléatoires
    srand(time(NULL));
    
    // ==================== REMPLISSAGE DES TABLEAUX ====================
    printf("Génération de valeurs aléatoires...\n\n");
    
    // Remplissage du tableau d'entiers avec des pointeurs
    ptr_int = tableau_int;  // ptr_int pointe vers le premier élément
    for (int i = 0; i < TAILLE; i++) {
        *ptr_int = rand() % 150 + 1;  // Valeurs entre 1 et 150
        ptr_int++;  // Avancer le pointeur vers l'élément suivant
    }
    
    // Remplissage du tableau de floats avec des pointeurs
    ptr_float = tableau_float;  // ptr_float pointe vers le premier élément
    for (int i = 0; i < TAILLE; i++) {
        *ptr_float = (rand() % 1000) / 100.0f;  // Valeurs entre 0.00 et 9.99
        ptr_float++;  // Avancer le pointeur
    }
    
    // ==================== AFFICHAGE AVANT MULTIPLICATION ====================
    printf("-------------------------------------------------------\n");
    printf("TABLEAU D'ENTIERS (avant la multiplication par 3) :\n");
    printf("-------------------------------------------------------\n");
    
    ptr_int = tableau_int;  // Réinitialiser le pointeur au début
    for (int i = 0; i < TAILLE; i++) {
        if (i > 0) printf(", ");
        printf("%d", *ptr_int);
        ptr_int++;
    }
    printf("\n\n");
    
    printf("-------------------------------------------------------\n");
    printf("TABLEAU DE FLOATS (avant la multiplication par 3) :\n");
    printf("-------------------------------------------------------\n");
    
    ptr_float = tableau_float;  // Réinitialiser le pointeur
    for (int i = 0; i < TAILLE; i++) {
        if (i > 0) printf(", ");
        printf("%.2f", *ptr_float);
        ptr_float++;
    }
    printf("\n\n");
    
    // ==================== MULTIPLICATION PAR 3 ====================
    printf("=======================================================\n");
    printf("    MULTIPLICATION PAR 3 (indices divisibles par 2)\n");
    printf("=======================================================\n\n");
    
    // Multiplication pour le tableau d'entiers
    // On multiplie par 3 les valeurs aux indices 0, 2, 4, 6, 8, 10
    ptr_int = tableau_int;  // Réinitialiser le pointeur
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {  // Si l'indice est divisible par 2
            printf("Position %d (entier)  : %d -> ", i, *ptr_int);
            *ptr_int = *ptr_int * 3;  // Multiplication par 3 via pointeur
            printf("%d\n", *ptr_int);
        }
        ptr_int++;  // Avancer le pointeur
    }
    printf("\n");
    
    // Multiplication pour le tableau de floats
    ptr_float = tableau_float;  // Réinitialiser le pointeur
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {  // Si l'indice est divisible par 2
            printf("Position %d (float)   : %.2f -> ", i, *ptr_float);
            *ptr_float = *ptr_float * 3.0f;  // Multiplication par 3 via pointeur
            printf("%.2f\n", *ptr_float);
        }
        ptr_float++;  // Avancer le pointeur
    }
    printf("\n");
    
    // ==================== AFFICHAGE APRÈS MULTIPLICATION ====================
    printf("=======================================================\n");
    printf("    RÉSULTATS APRÈS MULTIPLICATION\n");
    printf("=======================================================\n\n");
    
    printf("-------------------------------------------------------\n");
    printf("TABLEAU D'ENTIERS (après la multiplication par 3) :\n");
    printf("-------------------------------------------------------\n");
    
    ptr_int = tableau_int;  // Réinitialiser le pointeur
    for (int i = 0; i < TAILLE; i++) {
        if (i > 0) printf(", ");
        printf("%d", *ptr_int);
        ptr_int++;
    }
    printf("\n\n");
    
    printf("-------------------------------------------------------\n");
    printf("TABLEAU DE FLOATS (après la multiplication par 3) :\n");
    printf("-------------------------------------------------------\n");
    
    ptr_float = tableau_float;  // Réinitialiser le pointeur
    for (int i = 0; i < TAILLE; i++) {
        if (i > 0) printf(", ");
        printf("%.2f", *ptr_float);
        ptr_float++;
    }
    printf("\n\n");
    
    // ==================== STATISTIQUES ====================
    printf("=======================================================\n");
    printf("    STATISTIQUES\n");
    printf("=======================================================\n\n");
    
    // Calcul de la somme et de la moyenne pour les entiers
    int somme_int = 0;
    ptr_int = tableau_int;
    for (int i = 0; i < TAILLE; i++) {
        somme_int += *ptr_int;
        ptr_int++;
    }
    
    printf("Tableau d'entiers :\n");
    printf("  Somme totale : %d\n", somme_int);
    printf("  Moyenne      : %.2f\n\n", somme_int / (float)TAILLE);
    
    // Calcul de la somme et de la moyenne pour les floats
    float somme_float = 0.0f;
    ptr_float = tableau_float;
    for (int i = 0; i < TAILLE; i++) {
        somme_float += *ptr_float;
        ptr_float++;
    }
    
    printf("Tableau de floats :\n");
    printf("  Somme totale : %.2f\n", somme_float);
    printf("  Moyenne      : %.2f\n\n", somme_float / TAILLE);
    
    // Démonstration de l'arithmétique des pointeurs
    printf("=======================================================\n");
    printf("    DÉMONSTRATION : ARITHMÉTIQUE DES POINTEURS\n");
    printf("=======================================================\n\n");
    
    ptr_int = tableau_int;
    printf("Adresse du premier élément (int)  : %p\n", (void*)ptr_int);
    printf("Adresse du deuxième élément (int) : %p\n", (void*)(ptr_int + 1));
    printf("Différence en octets              : %ld octets\n\n", 
           (char*)(ptr_int + 1) - (char*)ptr_int);
    
    ptr_float = tableau_float;
    printf("Adresse du premier élément (float)  : %p\n", (void*)ptr_float);
    printf("Adresse du deuxième élément (float) : %p\n", (void*)(ptr_float + 1));
    printf("Différence en octets                : %ld octets\n\n", 
           (char*)(ptr_float + 1) - (char*)ptr_float);
    
    printf("=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}
