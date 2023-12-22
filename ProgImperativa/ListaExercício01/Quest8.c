#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*8) Faça um programa que receba o raio, calcule e mostre:
a) O comprimento de uma esfera, sabe-se que C = 2πR
b) A área de uma esfera, sabe-se que A = πR^2
c) O volume de uma esfera, sabe-se que V = 3/4πR^3*/

int main()
{
    float r,c,pi=3.14,a,v;
    
    printf("Informe o raio:\n");
    scanf("%f",&r);
    
    c= 2*pi*r;
    a=4.0*pi*pow(r,2);
    v= (4.0/3.0)*pi*pow(r,3);
    //tem que colocar o .0 para identiicar que é float ou double
    

    printf("Comprimento: %0.2f\nArea: %0.2f\nVolume: %0.2f",c,a,v);

    return 0;
}
