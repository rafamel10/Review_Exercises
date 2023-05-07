/*Faça um Programa que leia um vetor A com 10 números inteiros, 
calcule e mostre a soma dos quadrados dos elementos do vetor.*/

#include <stdio.h>
#include <math.h>
#define Max 10

int main(){
    int A[Max], soma=0, i;

    for(i=0;i<Max;i++){
        printf("%i° valor: ",i+1);
        scanf("%i",&A[i]);
        soma+=pow(A[i],2);
    }
    printf("Soma dos quadrados = %i",soma);
    return 0;
}