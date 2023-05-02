#include <stdio.h>
//Faça um Programa que peça dois números e imprima o maior deles.//
/*Teste Git*/
int main(){
    int A,B;
    printf("Digite o primeiro número:");
    scanf("%i",&A);
    printf("\nDigite o segundo número:");
    scanf("%i",&B);
    if(A>B){
        printf("\nO maior é: %i",A);
    }
    else{
        printf("\nO maior é %i",B);
    }
    return 0;

}