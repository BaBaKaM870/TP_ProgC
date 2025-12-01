#include <stdio.h>
#include <string.h>

int main() {
    printf("=======================================================\n");
    printf("    MANIPULATION DE VARIABLES AVEC POINTEURS\n");
    printf("=======================================================\n\n");
    
    // i. char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;
    
    // ii. short
    short s = 1234;
    signed short ss = -5678;
    unsigned short us = 50000;
    
    // iii. int
    int i = 0xa47865ff;
    signed int si = -987654;
    unsigned int ui = 3000000000;
    
    // iv. long int
    long int li = 1234567890L;
    signed long int sli = -9876543210L;
    unsigned long int uli = 4000000000UL;
    
    // v. long long int
    long long int lli = 9876543210123LL;
    signed long long int slli = -1234567890123LL;
    unsigned long long int ulli = 18446744073709551615ULL;
    
    // vi. float
    float f = 2.0f;
    float f2 = 3.14159f;
    
    // vii. double
    double d = 3.141592653589793;
    double d2 = -2.718281828459045;
    
    // viii. long double
    long double ld = 3.14159265358979323846L;
    long double ld2 = -1.41421356237309504880L;
    
    // Déclaration des pointeurs
    char *ptr_c = &c;
    signed char *ptr_sc = &sc;
    unsigned char *ptr_uc = &uc;
    
    short *ptr_s = &s;
    signed short *ptr_ss = &ss;
    unsigned short *ptr_us = &us;
    
    int *ptr_i = &i;
    signed int *ptr_si = &si;
    unsigned int *ptr_ui = &ui;
    
    long int *ptr_li = &li;
    signed long int *ptr_sli = &sli;
    unsigned long int *ptr_uli = &uli;
    
    long long int *ptr_lli = &lli;
    signed long long int *ptr_slli = &slli;
    unsigned long long int *ptr_ulli = &ulli;
    
    float *ptr_f = &f;
    float *ptr_f2 = &f2;
    
    double *ptr_d = &d;
    double *ptr_d2 = &d2;
    
    long double *ptr_ld = &ld;
    long double *ptr_ld2 = &ld2;
    
    // ==================== AVANT LA MANIPULATION ====================
    printf("AVANT LA MANIPULATION :\n");
    printf("-------------------------------------------------------\n\n");
    
    // Affichage des char
    printf("i. CHAR :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)ptr_c, *(unsigned char*)ptr_c);
    printf("Adresse de sc : %p, Valeur : %02x\n", (void*)ptr_sc, *(unsigned char*)ptr_sc);
    printf("Adresse de uc : %p, Valeur : %02x\n\n", (void*)ptr_uc, *ptr_uc);
    
    // Affichage des short
    printf("ii. SHORT :\n");
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ptr_s, *(unsigned short*)ptr_s);
    printf("Adresse de ss : %p, Valeur : %04x\n", (void*)ptr_ss, *(unsigned short*)ptr_ss);
    printf("Adresse de us : %p, Valeur : %04x\n\n", (void*)ptr_us, *ptr_us);
    
    // Affichage des int
    printf("iii. INT :\n");
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)ptr_i, *(unsigned int*)ptr_i);
    printf("Adresse de si : %p, Valeur : %08x\n", (void*)ptr_si, *(unsigned int*)ptr_si);
    printf("Adresse de ui : %p, Valeur : %08x\n\n", (void*)ptr_ui, *ptr_ui);
    
    // Affichage des long int
    printf("iv. LONG INT :\n");
    printf("Adresse de li  : %p, Valeur : %016lx\n", (void*)ptr_li, *(unsigned long*)ptr_li);
    printf("Adresse de sli : %p, Valeur : %016lx\n", (void*)ptr_sli, *(unsigned long*)ptr_sli);
    printf("Adresse de uli : %p, Valeur : %016lx\n\n", (void*)ptr_uli, *ptr_uli);
    
    // Affichage des long long int
    printf("v. LONG LONG INT :\n");
    printf("Adresse de lli  : %p, Valeur : %016llx\n", (void*)ptr_lli, *(unsigned long long*)ptr_lli);
    printf("Adresse de slli : %p, Valeur : %016llx\n", (void*)ptr_slli, *(unsigned long long*)ptr_slli);
    printf("Adresse de ulli : %p, Valeur : %016llx\n\n", (void*)ptr_ulli, *ptr_ulli);
    
    // Affichage des float (représentation hexadécimale de la valeur en mémoire)
    printf("vi. FLOAT :\n");
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("Adresse de f2 : %p, Valeur : %08x\n\n", (void*)ptr_f2, *(unsigned int*)ptr_f2);
    
    // Affichage des double
    printf("vii. DOUBLE :\n");
    printf("Adresse de d  : %p, Valeur : %016lx\n", (void*)ptr_d, *(unsigned long*)ptr_d);
    printf("Adresse de d2 : %p, Valeur : %016lx\n\n", (void*)ptr_d2, *(unsigned long*)ptr_d2);
    
    // Affichage des long double
    printf("viii. LONG DOUBLE :\n");
    printf("Adresse de ld  : %p\n", (void*)ptr_ld);
    printf("Adresse de ld2 : %p\n\n", (void*)ptr_ld2);
    
    // ==================== MANIPULATION PAR POINTEURS ====================
    printf("\n=======================================================\n");
    printf("    MANIPULATION DES VARIABLES VIA POINTEURS\n");
    printf("=======================================================\n\n");
    
    // Modification des valeurs via les pointeurs
    *ptr_c = 'B';
    *ptr_sc = -100;
    *ptr_uc = 150;
    
    *ptr_s = 5678;
    *ptr_ss = -1234;
    *ptr_us = 60000;
    
    *ptr_i = 0xa47865fe;  // Changement de la dernière valeur hex
    *ptr_si = -123456;
    *ptr_ui = 2500000000;
    
    *ptr_li = 9876543210L;
    *ptr_sli = -1234567890L;
    *ptr_uli = 5000000000UL;
    
    *ptr_lli = 1234567890123LL;
    *ptr_slli = -9876543210123LL;
    *ptr_ulli = 9223372036854775807ULL;
    
    *ptr_f = 1.0f;  // Changement de 2.0 à 1.0 (en hex: 40000000 -> 3f800000)
    *ptr_f2 = 2.71828f;
    
    *ptr_d = 2.718281828459045;
    *ptr_d2 = -3.141592653589793;
    
    *ptr_ld = 1.61803398874989484820L;
    *ptr_ld2 = -2.23606797749978969640L;
    
    // ==================== APRÈS LA MANIPULATION ====================
    printf("APRÈS LA MANIPULATION :\n");
    printf("-------------------------------------------------------\n\n");
    
    // Affichage des char
    printf("i. CHAR :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)ptr_c, *(unsigned char*)ptr_c);
    printf("Adresse de sc : %p, Valeur : %02x\n", (void*)ptr_sc, *(unsigned char*)ptr_sc);
    printf("Adresse de uc : %p, Valeur : %02x\n\n", (void*)ptr_uc, *ptr_uc);
    
    // Affichage des short
    printf("ii. SHORT :\n");
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ptr_s, *(unsigned short*)ptr_s);
    printf("Adresse de ss : %p, Valeur : %04x\n", (void*)ptr_ss, *(unsigned short*)ptr_ss);
    printf("Adresse de us : %p, Valeur : %04x\n\n", (void*)ptr_us, *ptr_us);
    
    // Affichage des int
    printf("iii. INT :\n");
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)ptr_i, *(unsigned int*)ptr_i);
    printf("Adresse de si : %p, Valeur : %08x\n", (void*)ptr_si, *(unsigned int*)ptr_si);
    printf("Adresse de ui : %p, Valeur : %08x\n\n", (void*)ptr_ui, *ptr_ui);
    
    // Affichage des long int
    printf("iv. LONG INT :\n");
    printf("Adresse de li  : %p, Valeur : %016lx\n", (void*)ptr_li, *(unsigned long*)ptr_li);
    printf("Adresse de sli : %p, Valeur : %016lx\n", (void*)ptr_sli, *(unsigned long*)ptr_sli);
    printf("Adresse de uli : %p, Valeur : %016lx\n\n", (void*)ptr_uli, *ptr_uli);
    
    // Affichage des long long int
    printf("v. LONG LONG INT :\n");
    printf("Adresse de lli  : %p, Valeur : %016llx\n", (void*)ptr_lli, *(unsigned long long*)ptr_lli);
    printf("Adresse de slli : %p, Valeur : %016llx\n", (void*)ptr_slli, *(unsigned long long*)ptr_slli);
    printf("Adresse de ulli : %p, Valeur : %016llx\n\n", (void*)ptr_ulli, *ptr_ulli);
    
    // Affichage des float
    printf("vi. FLOAT :\n");
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("Adresse de f2 : %p, Valeur : %08x\n\n", (void*)ptr_f2, *(unsigned int*)ptr_f2);
    
    // Affichage des double
    printf("vii. DOUBLE :\n");
    printf("Adresse de d  : %p, Valeur : %016lx\n", (void*)ptr_d, *(unsigned long*)ptr_d);
    printf("Adresse de d2 : %p, Valeur : %016lx\n\n", (void*)ptr_d2, *(unsigned long*)ptr_d2);
    
    // Affichage des long double
    printf("viii. LONG DOUBLE :\n");
    printf("Adresse de ld  : %p\n", (void*)ptr_ld);
    printf("Adresse de ld2 : %p\n\n", (void*)ptr_ld2);
    
    printf("=======================================================\n");
    printf("    OBSERVATIONS\n");
    printf("=======================================================\n\n");
    printf("✓ Les adresses des variables restent identiques\n");
    printf("✓ Les valeurs ont été modifiées via les pointeurs\n");
    printf("✓ Toutes les valeurs sont affichées en hexadécimal\n\n");
    
    printf("=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}
