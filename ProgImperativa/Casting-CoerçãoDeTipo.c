#include <stdio.h>

int main() {
    float numerador, denominador;

    // Solicita os dois valores do tipo float
    printf("Informe o numerador (float): ");
    scanf("%f", &numerador);

    printf("Informe o denominador (float): ");
    scanf("%f", &denominador);

    // Realiza a divisão inteira e converte o resultado para int
    int resultado = (int)(numerador / denominador);

    // Imprime o resultado da divisão inteira
    printf("Resultado da divisao inteira: %d\n", resultado);

    return 0;
}
