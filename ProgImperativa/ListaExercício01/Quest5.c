#include <stdio.h>
#include <stdlib.h>

/*5) Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça
um programa que receba o salário fixo de um funcionário e o valor de suas vendas,
calcule e mostre a comissão e o salário final do funcionário.*/

int main()
{
    int fixo,valorv,comissao, final;
    printf("Informe o salario do fixo:\n");
    scanf("%d",&fixo);
    
    printf("Informe o valor de vendas:\n");
    scanf("%d",&valorv);
    
    comissao = valorv*0.04;
    final = fixo+comissao;
    
 
    
    printf("Comissao: %d\nSalario final: %d",comissao, final);

    return 0;
}
