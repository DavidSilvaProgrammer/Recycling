#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    // Solicita o valor inteiro ao usuário
    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);

    // Calcula a quantidade mínima de notas de cada tipo
    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    notas2 = valor / 2;
    valor %= 2;

    notas1 = valor;

    // Imprime o valor lido e a quantidade mínima de notas de cada tipo
    printf("Valor lido: %d\n", valor);
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
