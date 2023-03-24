#include <stdio.h>

int main() {
    // Declarando as Variaveis
    float num1, num2, resultado;
    char operador;

    printf("digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("digite o segundo operador: ");
    scanf("%f", &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador invalido!");
            return 0;
    }

    printf("O resultado é %.0f", resultado);

    return 0;

}