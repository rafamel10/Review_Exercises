/*Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.*/
#include <stdio.h>

int main(){
    float Vet[10];
    int i;
    for(i=0;i<10;i++){
        printf("Digite o %i° valor: ",i+1);
        scanf("%f",&Vet[i]);
    }
    for(i=9;i>=0;i--){
        printf("[%.2f]",Vet[i]);
    }
    return 0;
}