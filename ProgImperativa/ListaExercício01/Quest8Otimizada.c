#include <stdio.h>
#include <math.h>

int main() {
    double raio, comprimento, area, volume;
    const double PI = 3.14159265358979323846;

    // Solicita ao usuário que insira o raio da esfera
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    // Calcula o comprimento da circunferência
    comprimento = 2 * PI * raio;

    // Calcula a área da superfície
    area = 4 * PI * pow(raio, 2);

    // Calcula o volume da esfera
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    // Exibe os resultados
    printf("Comprimento da circunferencia: %.2f\n", comprimento);
    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
