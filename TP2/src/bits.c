#include <stdio.h>

int main() {
    // Déclaration et initialisation de la variable
    int d = 0x10080000;  // Exemple: bits 4 et 20 à 1 (en partant de la gauche)
    
    printf("=== Vérification des bits 4 et 20 ===\n\n");
    
    // Affichage de la valeur en décimal et hexadécimal
    printf("Valeur de d : %d (décimal)\n", d);
    printf("Valeur de d : 0x%X (hexadécimal)\n\n", d);
    
    // Affichage de la représentation binaire (pour visualisation)
    printf("Représentation binaire (32 bits) :\n");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (d >> i) & 1);
        if (i % 4 == 0) printf(" ");  // Espacement tous les 4 bits
    }
    printf("\n");
    printf("Position:    4                   20\n");
    printf("             ↓                   ↓\n\n");
    
    // Extraction du 4ème bit de gauche (bit 28 en notation de droite)
    // Pour un int de 32 bits, le 4ème bit de gauche est à la position 31-3 = 28
    int bit4 = (d >> 28) & 1;
    
    // Extraction du 20ème bit de gauche (bit 12 en notation de droite)
    // Pour un int de 32 bits, le 20ème bit de gauche est à la position 31-19 = 12
    int bit20 = (d >> 12) & 1;
    
    printf("4ème bit de gauche (position 28) : %d\n", bit4);
    printf("20ème bit de gauche (position 12) : %d\n\n", bit20);
    
    // Vérification si les deux bits sont à 1
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;
    
    printf("=== RÉSULTAT ===\n");
    printf("Les deux bits (4 et 20) sont-ils à 1 ? %d\n", resultat);
    
    // Explication
    if (resultat == 1) {
        printf("✓ Les 4ème et 20ème bits de gauche sont tous les deux à 1\n");
    } else {
        printf("✗ Au moins un des bits (4 ou 20) n'est pas à 1\n");
    }
    
    printf("\n=== Tests avec d'autres valeurs ===\n");
    
    // Test 1: Les deux bits à 1
    d = 0x10080000;
    bit4 = (d >> 28) & 1;
    bit20 = (d >> 12) & 1;
    resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;
    printf("d = 0x%X : %d\n", d, resultat);
    
    // Test 2: Seulement bit 4 à 1
    d = 0x10000000;
    bit4 = (d >> 28) & 1;
    bit20 = (d >> 12) & 1;
    resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;
    printf("d = 0x%X : %d\n", d, resultat);
    
    // Test 3: Seulement bit 20 à 1
    d = 0x00080000;
    bit4 = (d >> 28) & 1;
    bit20 = (d >> 12) & 1;
    resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;
    printf("d = 0x%X : %d\n", d, resultat);
    
    // Test 4: Aucun des deux bits à 1
    d = 0x00000000;
    bit4 = (d >> 28) & 1;
    bit20 = (d >> 12) & 1;
    resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;
    printf("d = 0x%X : %d\n", d, resultat);
    
    printf("\n=== Programme terminé avec succès ===\n");
    
    return 0;
}
