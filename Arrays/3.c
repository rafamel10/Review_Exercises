/*Faça um Programa que leia 4 notas, mostre as notas e a média na tela.*/
#include<stdio.h>

int main(){
    float Nota[4],SomaNota=0;
    int i;

    for(i=0;i<4;i++){
        printf("Digite a %i° nota: ",i+1);
        scanf("%f",&Nota[i]);
        SomaNota+=Nota[i];
    }
    for(i=0;i<4;i++){
        printf("%i° Nota = %f\n",i+1,Nota[i]);
        if(i==3)
        printf("Média = %.2f",SomaNota/4);
    }
    return 0;
    
}