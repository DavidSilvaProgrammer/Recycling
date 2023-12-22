#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*7) Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o
valor da hipotenusa.*/

int main()
{
    int a,b,c,d;
    
    printf("Informe os valores dos dois catetos:\n");
    scanf("%d%d",&a,&b);
    c=pow(a,2)+pow(b,2);
    d=sqrt(c);
    
    printf("Quadrado Cateto a: %0.0f\nQuadrado Cateto b: %0.0f\nQuadrado Hipotenusa: %d\nHipotenusa:%d",pow(a,2),pow(b,2),c,d);

    return 0;
}
