/* Faça um Programa que leia 20 números inteiros e armazene-os num vetor. 
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.*/

#include <stdio.h>
#define Max 20

int VerificaPar(int num){
    if(num%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int VetGeral[Max], VetPar[Max], VetImpar[Max];
    int ContImpar=0, ContPar=0, i;

    for(i=0;i<Max;i++){
        printf("DIgite o %i° número: ",i+1);
        scanf("%i",&VetGeral[i]);
    }
    for(i=0;i<Max;i++){
        if(VerificaPar(VetGeral[i])==0){
            VetPar[ContPar]=VetGeral[i];
            ContPar++;
        }
        else{
            VetImpar[ContImpar]=VetGeral[i];
            ContImpar++;
        }
    }
    for(i=0;i<Max;i++){
        printf("[%i] ",VetGeral[i]);
        }
    printf("\n");
    for(i=0;i<ContPar;i++){
        printf("[%i] ",VetPar[i]);
    }
    printf("\n");
    for(i=0;i<ContImpar;i++){
        printf("[%i] ",VetImpar[i]);
    }
    return 0;

}