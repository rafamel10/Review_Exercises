#include <stdio.h>

//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.//
int main(){
    float A;
    printf("Digite um valor: ");
    scanf("%f",&A);
    if(A<0)
        printf("\nO número %0.00f é negativo!",A); //%0.00f para limitar casas decimais//
    else
        printf("\n%0.00f é positivo!",A); //%0.00f para limitar casas decimais//

}