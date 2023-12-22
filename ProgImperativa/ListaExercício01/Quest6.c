#include <stdio.h>
#include <stdlib.h>

/*6) Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que para
calcular essa área é preciso somar a base maior com a base menor, multiplicar o
resultado pela altura e dividir por dois.*/

int main()
{
    int maior,menor, altura, resul;
    
    printf("Programa para calcular trapezio:\n");
    printf("Informe a base maior, menor e altura:\n");
    scanf("%d",&maior);
    scanf("%d",&menor);
    scanf("%d",&altura);
    resul=((maior+menor)*altura)/2;
    
    printf("Resultado: %d",resul);

    return 0;
}
