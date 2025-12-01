#include "operator.h"
#include <stdio.h>

int somme(int num1, int num2) {
    return num1 + num2;
}

int difference(int num1, int num2) {
    return num1 - num2;
}

int produit(int num1, int num2) {
    return num1 * num2;
}

int quotient(int num1, int num2) {
    if (num2 == 0) {
        printf("Erreur : division par zero !\n");
        return 0;
    }
    return num1 / num2;
}

int modulo(int num1, int num2) {
    if (num2 == 0) {
        printf("Erreur : modulo par zero !\n");
        return 0;
    }
    return num1 % num2;
}

int et_binaire(int num1, int num2) {
    return num1 & num2;
}

int ou_binaire(int num1, int num2) {
    return num1 | num2;
}

int negation(int num1, int num2) {
    (void)num2;  // évite un warning
    return ~num1;
}
