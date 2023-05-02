/*Faça um Programa que converta metros para centímetros.*/
#include <stdio.h>

int main(){
    float metro;
    printf("Digite o valor em metros: ");
    scanf("%f",&metro);
    printf("%.2f centímetros",metro*100);
    return 0;

}