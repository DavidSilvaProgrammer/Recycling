/*Faça um programa que receba dois valores inteiros nas
variáveis A e B. O programa deve trocar os valores entre as
variáveis (ou seja, ao término do programa a variável A deve
ter o valor inicial de B e vice-versa). Apresentar as duas
variáveis o final.*/

#include <stdio.h>

int main()
{   int a, b,aux;
    printf("Digite o valor de A e o de B:\n");
    scanf("%d%d",&a,&b);
    aux=a;
    a=b;
    b=aux;
    
    printf("Novo valor de a: %d\nNovo valor de b: %d",a,b);

    return 0;
}
