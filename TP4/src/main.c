#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2;
    char op;
    int resultat;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et_binaire(num1, num2);
            break;
        case '|':
            resultat = ou_binaire(num1, num2);
            break;
        case '~':
            resultat = negation(num1, num2);
            break;
        default:
            printf("Operateur invalide !\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);

    return 0;
}
