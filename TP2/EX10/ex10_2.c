#include <stdio.h>

int main() {
    int a, b;
    float result;
    char op;

    while(1) {
        printf("Entrez deux valeurs.\na = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);

        printf("Choisissez une opération (+, -, *, /) : ");
        scanf(" %c", &op);  

        switch(op) {
            case '+':
                result = a + b;
                printf("Somme = %.2f\n", result);
                break;
            case '-':
                result = a - b;
                printf("Soustraction = %.2f\n", result);
                break;
            case '*':
                result = a * b;
                printf("Multiplication = %.2f\n", result);
                break;
            case '/':
                if(b != 0) {
                    result = (float)a / b;
                    printf("Division = %.2f\n", result);
                } else {
                    printf("Erreur : Division par zéro\n");
                }
                break;
            default:
                printf("Opération non reconnue\n");
        }

        printf("\n");

    }
    

    return 0;
}
