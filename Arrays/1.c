/* Faça um Programa que leia um vetor de 5 números inteiros e mostre-os. */
#include <stdio.h>

int main(){
    int Vet[5], i;
    for(i=0;i<5;i++){
        printf("Digite o %i número: ",i+1);
        scanf("%i",&Vet[i]);
    }
    for(i=0;i<5;i++){
        printf("[%i]",Vet[i]);
    }
    return 0;
}