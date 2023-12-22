#include <stdio.h>
#include <stdlib.h>

/*3) Faça um programa que receba o preço de um produto, 
calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%..*/

int main()
{
    int x,y,z;
    printf("Informe o preco do produto:\n");
    scanf("%d",&x);
 
    
    x=x-(0.1*x);
    
    printf("Valor do produto com desconto de 10%%: %d",x);

    return 0;
}
