/*Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos,
cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.*/

#include <stdio.h>

int main(){
    int VetA[10], VetB[10], VetTotal[20];
    int i, j, auxA=0,auxB=0;

    for(i=0;i<10;i++){
        printf("Digite o %i° valor de A: ",i+1);
        scanf("%i",&VetA[i]);
    }
    for(i=0;i<10;i++){
        printf("Digite o %i° valor de B: ",i+1);
        scanf("%i",&VetB[i]);
    }
    for(j=0;j<20;j++){
        if(j%2==0){
            VetTotal[j]=VetA[auxA];
            auxA++;
            
        }
        else{
            VetTotal[j]=VetB[auxB];
            auxB++;
        }

    }
    printf("\nImprimindo vetor\n");

    for(j=0;j<20;j++){
        printf("[%i]",VetTotal[j]);
    }
    return 0;
}