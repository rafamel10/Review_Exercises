/*Faça um Programa que peça dois números e imprima a soma.*/

#include <stdio.h>
int main(){
    float num1,num2;
    printf("Digite o 1° número: ");
    scanf("%f",&num1);
    printf("Digite o 2° número: ");
    scanf("%f",&num2);
    printf("Total = %.2f",num1+num2);
    return 0;
}