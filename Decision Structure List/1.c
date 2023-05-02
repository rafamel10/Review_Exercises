/*Faça um Programa que peça dois números e imprima o maior deles.*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o 1° número: ");
    scanf("%i",&num1);
    printf("Digite o 2° número: ");
    scanf("%i",&num2);

    if(num1>num2)
        printf("O maior é %i",num1);
    else    
        printf("O mairo é %i",num2);

    return 0;
}