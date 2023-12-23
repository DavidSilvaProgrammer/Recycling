#include <stdio.h>

int main() {
    float numero;
    int parteInteira;
    float parteDecimal;

    // Solicita o número ao usuário
    printf("Informe um número (float): ");
    scanf("%f", &numero);

    // Obtém a parte inteira usando cast para int
    parteInteira = (int)numero;

    // Obtém a parte decimal subtraindo a parte inteira
    parteDecimal = numero - parteInteira;

    // Imprime as partes separadas
    printf("Parte Inteira: %d\n", parteInteira);
    printf("Parte Decimal: %.4f\n", parteDecimal);

    return 0;
}
