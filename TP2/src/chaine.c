#include <stdio.h>

int main() {
    // Déclaration des chaînes de caractères
    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concatenation[200];
    
    printf("=== Manipulation de Chaînes de Caractères ===\n\n");
    
    // Saisie des deux chaînes
    printf("Entrez la première chaîne : ");
    fflush(stdout);
    scanf("%99[^\n]", chaine1);  // Lit jusqu'au retour à la ligne
    
    // Vider le buffer
    while (getchar() != '\n');
    
    printf("Entrez la deuxième chaîne : ");
    fflush(stdout);
    scanf("%99[^\n]", chaine2);
    
    printf("\n=== OPÉRATION 1 : Calcul de la longueur ===\n");
    
    // 1. Calculer la longueur de chaine1
    int longueur1 = 0;
    while (chaine1[longueur1] != '\0') {
        longueur1++;
    }
    printf("Longueur de la chaîne 1 : %d caractères\n", longueur1);
    
    // Calculer la longueur de chaine2
    int longueur2 = 0;
    while (chaine2[longueur2] != '\0') {
        longueur2++;
    }
    printf("Longueur de la chaîne 2 : %d caractères\n", longueur2);
    printf("Longueur totale : %d caractères\n", longueur1 + longueur2);
    
    printf("\n=== OPÉRATION 2 : Copie de chaîne ===\n");
    
    // 2. Copier chaine1 dans copie
    int i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';  // Ajouter le caractère de fin
    
    printf("Chaîne originale : \"%s\"\n", chaine1);
    printf("Chaîne copiée    : \"%s\"\n", copie);
    
    printf("\n=== OPÉRATION 3 : Concaténation ===\n");
    
    // 3. Concaténer chaine1 et chaine2
    
    // Étape 1 : Copier chaine1 dans concatenation
    i = 0;
    while (chaine1[i] != '\0') {
        concatenation[i] = chaine1[i];
        i++;
    }
    
    // Étape 2 : Ajouter chaine2 à la fin
    int j = 0;
    while (chaine2[j] != '\0') {
        concatenation[i] = chaine2[j];
        i++;
        j++;
    }
    
    // Étape 3 : Ajouter le caractère de fin
    concatenation[i] = '\0';
    
    printf("Chaîne 1         : \"%s\"\n", chaine1);
    printf("Chaîne 2         : \"%s\"\n", chaine2);
    printf("Concaténation    : \"%s\"\n", concatenation);
    
    printf("\n=== Démonstration détaillée ===\n");
    
    // Affichage caractère par caractère de la concaténation
    printf("\nAffichage caractère par caractère de la concaténation :\n");
    i = 0;
    while (concatenation[i] != '\0') {
        printf("Position %2d : '%c' (code ASCII : %d)\n", i, concatenation[i], concatenation[i]);
        i++;
    }
    printf("Position %2d : '\\0' (caractère de fin)\n", i);
    
    printf("\n=== Vérification des opérations ===\n");
    
    // Vérifier que la copie est identique
    int copie_correcte = 1;
    i = 0;
    while (chaine1[i] != '\0' || copie[i] != '\0') {
        if (chaine1[i] != copie[i]) {
            copie_correcte = 0;
            break;
        }
        i++;
    }
    
    if (copie_correcte) {
        printf("✓ La copie est correcte\n");
    } else {
        printf("✗ Erreur dans la copie\n");
    }
    
    // Vérifier la longueur de la concaténation
    int longueur_concat = 0;
    while (concatenation[longueur_concat] != '\0') {
        longueur_concat++;
    }
    
    if (longueur_concat == longueur1 + longueur2) {
        printf("✓ La longueur de la concaténation est correcte (%d = %d + %d)\n", 
               longueur_concat, longueur1, longueur2);
    } else {
        printf("✗ Erreur dans la longueur de la concaténation\n");
    }
    
    printf("\n=== Programme terminé avec succès ===\n");
    
    return 0;
}
