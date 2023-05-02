/*Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.*/
#include <stdio.h>
#include <math.h>

int main(){
    float l;

    printf("Digite o valor do lado:");
    scanf("%f",&l);
    printf("Área = %.2f",(pow(l,2))*2);

    return 0;

}