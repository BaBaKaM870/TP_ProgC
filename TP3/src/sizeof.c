#include <stdio.h>

int main() {
    printf("=======================================================\n");
    printf("    TAILLE DES TYPES DE DONNÉES ET POINTEURS\n");
    printf("    (Machine 64 bits)\n");
    printf("=======================================================\n\n");
    
    // ==================== TYPES DE BASE ====================
    printf("-------------------------------------------------------\n");
    printf("TYPES DE BASE :\n");
    printf("-------------------------------------------------------\n");
    printf("La taille de char          est : %zu octets\n", sizeof(char));
    printf("La taille de short         est : %zu octets\n", sizeof(short));
    printf("La taille de int           est : %zu octets\n", sizeof(int));
    printf("La taille de long          est : %zu octets\n", sizeof(long));
    printf("La taille de long long     est : %zu octets\n", sizeof(long long));
    printf("La taille de float         est : %zu octets\n", sizeof(float));
    printf("La taille de double        est : %zu octets\n", sizeof(double));
    printf("La taille de long double   est : %zu octets\n\n", sizeof(long double));
    
    // ==================== POINTEURS SIMPLES ====================
    printf("=======================================================\n");
    printf("POINTEURS SIMPLES (niveau 1) :\n");
    printf("=======================================================\n");
    printf("La taille de char*         est : %zu octets\n", sizeof(char*));
    printf("La taille de short*        est : %zu octets\n", sizeof(short*));
    printf("La taille de int*          est : %zu octets\n", sizeof(int*));
    printf("La taille de long*         est : %zu octets\n", sizeof(long*));
    printf("La taille de long long*    est : %zu octets\n", sizeof(long long*));
    printf("La taille de float*        est : %zu octets\n", sizeof(float*));
    printf("La taille de double*       est : %zu octets\n", sizeof(double*));
    printf("La taille de long double*  est : %zu octets\n", sizeof(long double*));
    printf("La taille de void*         est : %zu octets\n\n", sizeof(void*));
    
    // ==================== POINTEURS DE POINTEURS ====================
    printf("=======================================================\n");
    printf("POINTEURS DE POINTEURS (niveau 2) :\n");
    printf("=======================================================\n");
    printf("La taille de char**        est : %zu octets\n", sizeof(char**));
    printf("La taille de short**       est : %zu octets\n", sizeof(short**));
    printf("La taille de int**         est : %zu octets\n", sizeof(int**));
    printf("La taille de long**        est : %zu octets\n", sizeof(long**));
    printf("La taille de float**       est : %zu octets\n", sizeof(float**));
    printf("La taille de double**      est : %zu octets\n", sizeof(double**));
    printf("La taille de void**        est : %zu octets\n\n", sizeof(void**));
    
    // ==================== POINTEURS DE POINTEURS DE POINTEURS ====================
    printf("=======================================================\n");
    printf("POINTEURS DE POINTEURS DE POINTEURS (niveau 3) :\n");
    printf("=======================================================\n");
    printf("La taille de char***       est : %zu octets\n", sizeof(char***));
    printf("La taille de short***      est : %zu octets\n", sizeof(short***));
    printf("La taille de int***        est : %zu octets\n", sizeof(int***));
    printf("La taille de long***       est : %zu octets\n", sizeof(long***));
    printf("La taille de float***      est : %zu octets\n", sizeof(float***));
    printf("La taille de double***     est : %zu octets\n", sizeof(double***));
    printf("La taille de void***       est : %zu octets\n\n", sizeof(void***));
    
    // ==================== TABLEAUX ====================
    printf("=======================================================\n");
    printf("TABLEAUX :\n");
    printf("=======================================================\n");
    int tableau_int[10];
    char tableau_char[20];
    float tableau_float[5];
    double tableau_double[8];
    
    printf("La taille de int[10]       est : %zu octets\n", sizeof(tableau_int));
    printf("La taille de char[20]      est : %zu octets\n", sizeof(tableau_char));
    printf("La taille de float[5]      est : %zu octets\n", sizeof(tableau_float));
    printf("La taille de double[8]     est : %zu octets\n\n", sizeof(tableau_double));
    
    // ==================== STRUCTURES ====================
    printf("=======================================================\n");
    printf("STRUCTURES :\n");
    printf("=======================================================\n");
    
    struct Personne {
        char nom[50];
        int age;
        float taille;
    };
    
    struct Point {
        int x;
        int y;
    };
    
    printf("La taille de struct Personne est : %zu octets\n", sizeof(struct Personne));
    printf("La taille de struct Point    est : %zu octets\n", sizeof(struct Point));
    printf("La taille de struct Personne* est : %zu octets\n", sizeof(struct Personne*));
    printf("La taille de struct Point*    est : %zu octets\n\n", sizeof(struct Point*));
    
    // ==================== ANALYSE ET OBSERVATIONS ====================
    printf("=======================================================\n");
    printf("    OBSERVATIONS IMPORTANTES\n");
    printf("=======================================================\n\n");
    
    printf("✓ Sur un système 64 bits :\n");
    printf("  - Tous les POINTEURS ont la même taille : %zu octets\n", sizeof(void*));
    printf("  - Peu importe le type pointé (char, int, double, etc.)\n");
    printf("  - Peu importe le niveau d'indirection (*, **, ***)\n");
    printf("  - Un pointeur stocke une ADRESSE MÉMOIRE (64 bits = 8 octets)\n\n");
    
    printf("✓ Types de base :\n");
    printf("  - char  : %zu octet(s)  - Stocke un caractère\n", sizeof(char));
    printf("  - int   : %zu octets    - Stocke un entier\n", sizeof(int));
    printf("  - float : %zu octets    - Stocke un nombre décimal\n", sizeof(float));
    printf("  - double: %zu octets    - Stocke un nombre décimal haute précision\n\n", sizeof(double));
    
    printf("✓ Différence entre type et pointeur :\n");
    printf("  - int occupe   : %zu octets (valeur stockée)\n", sizeof(int));
    printf("  - int* occupe  : %zu octets (adresse mémoire)\n", sizeof(int*));
    printf("  - int** occupe : %zu octets (adresse d'une adresse)\n\n", sizeof(int**));
    
    printf("✓ Calcul de la taille d'un tableau :\n");
    printf("  - int[10] = %zu octets = 10 × %zu octets\n", 
           sizeof(tableau_int), sizeof(int));
    printf("  - Nombre d'éléments = sizeof(tableau) / sizeof(élément)\n");
    printf("  - Pour int[10] : %zu / %zu = %zu éléments\n\n",
           sizeof(tableau_int), sizeof(int), 
           sizeof(tableau_int) / sizeof(int));
    
    // ==================== DÉMONSTRATION PRATIQUE ====================
    printf("=======================================================\n");
    printf("    DÉMONSTRATION PRATIQUE\n");
    printf("=======================================================\n\n");
    
    int valeur = 42;
    int *ptr1 = &valeur;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    
    printf("Variable 'valeur' :\n");
    printf("  Valeur        : %d\n", valeur);
    printf("  Adresse       : %p\n", (void*)&valeur);
    printf("  Taille        : %zu octets\n\n", sizeof(valeur));
    
    printf("Pointeur 'ptr1' (int*) :\n");
    printf("  Pointe vers   : %p (adresse de valeur)\n", (void*)ptr1);
    printf("  Adresse de ptr1: %p\n", (void*)&ptr1);
    printf("  Taille        : %zu octets\n\n", sizeof(ptr1));
    
    printf("Pointeur 'ptr2' (int**) :\n");
    printf("  Pointe vers   : %p (adresse de ptr1)\n", (void*)ptr2);
    printf("  Adresse de ptr2: %p\n", (void*)&ptr2);
    printf("  Taille        : %zu octets\n\n", sizeof(ptr2));
    
    printf("Pointeur 'ptr3' (int***) :\n");
    printf("  Pointe vers   : %p (adresse de ptr2)\n", (void*)ptr3);
    printf("  Adresse de ptr3: %p\n", (void*)&ptr3);
    printf("  Taille        : %zu octets\n\n", sizeof(ptr3));
    
    printf("=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}
