#include <stdio.h>

int main() {
    printf("=== Tailles des types de base en C (en octets) ===\n\n");
    
    // i. char
    printf("i. char:\n");
    printf("   char               : %zu octets\n", sizeof(char));
    printf("   signed char        : %zu octets\n", sizeof(signed char));
    printf("   unsigned char      : %zu octets\n\n", sizeof(unsigned char));
    
    // ii. short
    printf("ii. short:\n");
    printf("   short              : %zu octets\n", sizeof(short));
    printf("   signed short       : %zu octets\n", sizeof(signed short));
    printf("   unsigned short     : %zu octets\n\n", sizeof(unsigned short));
    
    // iii. int
    printf("iii. int:\n");
    printf("   int                : %zu octets\n", sizeof(int));
    printf("   signed int         : %zu octets\n", sizeof(signed int));
    printf("   unsigned int       : %zu octets\n\n", sizeof(unsigned int));
    
    // iv. long int
    printf("iv. long int:\n");
    printf("   long int           : %zu octets\n", sizeof(long int));
    printf("   signed long int    : %zu octets\n", sizeof(signed long int));
    printf("   unsigned long int  : %zu octets\n\n", sizeof(unsigned long int));
    
    // v. long long int
    printf("v. long long int:\n");
    printf("   long long int      : %zu octets\n", sizeof(long long int));
    printf("   signed long long   : %zu octets\n", sizeof(signed long long int));
    printf("   unsigned long long : %zu octets\n\n", sizeof(unsigned long long int));
    
    // vi. float
    printf("vi. float:\n");
    printf("   float              : %zu octets\n\n", sizeof(float));
    
    // vii. double
    printf("vii. double:\n");
    printf("   double             : %zu octets\n\n", sizeof(double));
    
    // viii. long double
    printf("viii. long double:\n");
    printf("   long double        : %zu octets\n\n", sizeof(long double));
    
    return 0;
}
