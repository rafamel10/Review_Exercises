/*Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].*/

#include <stdio.h>

int main(){
    float num;
    printf("Digite um número: ");
    scanf("%f",&num);
    printf("O númeo informado foi[%.2f]",num);
    return 0;
}