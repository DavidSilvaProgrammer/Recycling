/*
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em
horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância
percorrida e, em seguida, calcular quantos litros seriam necessários. 
Mostre o valor com 3 casas decimais após o ponto.
*/

#include <stdio.h>

int main()
{
    float horas,media,distancia,litros;
    
    printf("Infome o tempo gasto na viagem em horas:\n");
    scanf("%f",&horas);
    printf("Infome a velocidade media da viagem em km/h:\n");
    scanf("%f",&media);
    distancia=media*horas;
    litros=distancia/12;
    
    printf("Distancia: %0.3f\nQuantidade de litros necessarios: %0.3f",distancia,litros);

    return 0;
}


/*
Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem,
ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através
de um simples programa.

A entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo
é a velocidade média durante a mesma (em km/h). Imprima a quantidade de litros necessária
para realizar a viagem, com três dígitos após o ponto decimal.
*/
