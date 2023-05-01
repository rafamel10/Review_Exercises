/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo .
a soma do triplo do primeiro com o terceiro.
o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <math.h>


int main(){
    int num1, num2;
    float num3,x,y,z;

    printf("Digite o primeiro número (inteiro): ");
    scanf("%i",&num1);
    printf("Digite o segundo número (inteiro): ");
    scanf("%i",&num2);
    printf("Digite o terceiro número (real): ");
    scanf("%f",&num3);

    x=(2*num1)*(num2/2);
    y=3*num1+num3;
    z=pow(num3,3);

    printf("%.2f\n%.2f\n%.2f",x,y,z);
    
    return 0;

}
