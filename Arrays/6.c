/*Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, 
imprima o número de alunos com média maior ou igual a 7.0.*/

#include <stdio.h>

int main(){
    float Nota[10][4], Media[10];
    int i, j, cont=0;

    for(j=0;j<10;j++){
        printf("%i° Aluno\n",j+1);
            Media[j]=0;
        for(i=0;i<4;i++){

            printf("%i° Nota: ",i+1);
            scanf("%f",&Nota[j][i]);
            Media[j]+=(Nota[j][i]/4);
        }
    }
    for(j=0;j<10;j++){
        if(Media[j]>=7){
            cont++;
        }
    }
    printf("%i alunos com média >=7",cont);
    return 0;

}