/*Faça um Programa que leia três números e mostre o maior deles.*/

#include <stdio.h>

void MostraMaior(int num1, int num2, int num3){
    if(num1>=num2 && num1>=num3)
        printf("\n%i é o maior!",num1);
    else 
        if(num2>=num1 && num2>=num3)
            printf("\n%i é o maior!",num2);
        else
            printf("\n%i é o maior!",num3);
}
int main(){
    int num1,num2,num3;
    printf("Digite o 1° número: ");
    scanf("%i",&num1);
    printf("Digite o 2° número: ");
    scanf("%i",&num2);
    printf("Digite o 3° número: ");
    scanf("%i",&num3);

    MostraMaior(num1,num2,num3);

    return (0);
}
