/******************************************************************************
Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas
efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão
sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas
decimais.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    double fixo, totalVendas,salarioTotal, comissao;
    
    printf("Informe o nome do vendedor:\n");
    fgets(nome,sizeof(nome),stdin);
    
    printf("Informe seu salario fixo:\n");
    scanf("%lf",&fixo);
    
    printf("Informe o total de vendas em dinheiro:\n");
    scanf("%lf",&totalVendas);
    
    comissao = totalVendas*0.15;
    salarioTotal=fixo+comissao;
    printf("Informacoes do vendedor:\nSalario total: R$: %0.2lf\nComissao: %0.2lf",salarioTotal,comissao);

    return 0;
}

/*
A entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double)
com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas
efetuadas por este vendedor, respectivamente.
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
*/
