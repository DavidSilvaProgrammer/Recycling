#include <stdio.h>
#include <stdlib.h>

/*4) Faça um programa que receba o custo de um espetáculo teatral e o preço do convite
desse espetáculo. Esse programa deve calcular e mostrar a quantidade de convites que
devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.*/

int main()
{
    int x,y,soma=0,cont=0;
    printf("Informe o custo do espetaculo:\n");
    scanf("%d",&x);
    
    printf("Informe o preco do convite:\n");
    scanf("%d",&y);
    
    while(soma<x){
        soma+=y;
        cont++;
    }
 
    
    printf("Valor arrecadado necessario: %d\nNumero de convites necessarios: %d",soma, cont);

    return 0;
}
