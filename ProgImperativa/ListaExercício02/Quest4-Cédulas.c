/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o
valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir
mostre o valor lido e a relação de notas necessárias.
A entrada contém um valor inteiro N. Imprima na saída o valor lido e, em seguida, a quantidade
mínima de notas de cada tipo necessárias, conforme o exemplo fornecido.
*/

#include <stdio.h>

int main()
{   
    int n,cem, cinquenta, vinte, dez, cinco, dois, centavo,resto,resto2,resto3,resto4,resto5;
    printf("Informe um valor inteiro de dinheiro:\n");
    scanf("%d",&n);
    cem=n/100;
    resto=n%100;
    cinquenta=resto/50;
    resto2=resto%50;
    vinte=resto2/20;
    resto3=resto2%20;
    dez=resto3/10;
    resto4=resto3%10;
    cinco=resto4/5;
    resto5=resto4%5;
    dois=resto5/2;
    centavo=resto5%2;
    
    printf("Quantidade de notas:\nCem: %d\nCinquenta: %d\nVinte: %d\nDez: %d\nCinco: %d\nDois: %d\nCentavo: %d",cem,cinquenta,vinte,dez,cinco,dois,centavo);
    

    return 0;
}

