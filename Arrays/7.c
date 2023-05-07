/*Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.*/

#include <stdio.h>

int main(){
    int Num[5];
    int Soma=0, Multi=1, i;

    for(i=0;i<5;i++){
        printf("%i° Número: ",i+1);
        scanf("%i",&Num[i]);
        Soma+=Num[i];
        Multi*=Num[i];
    }
    printf("\nSoma=%i\tMultiplicação=%i\nVetor=",Soma,Multi);
    for(i=0;i<5;i++){
        printf("[%i] ",Num[i]);
    }
    return 0;
}