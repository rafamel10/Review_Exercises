/*Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.*/

#include <stdio.h>
#include <math.h>

#define Pi 3.1415

int main(){
    double raio;
    printf("Digite o valor do raio: ");
    scanf("%lf",&raio);
    printf("Área = %lf",(pow(raio,raio))*Pi);
    return 0;
}