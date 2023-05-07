/*Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos
alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.*/

#include <stdio.h>

int main(){
    float Aluno[30][2], somaAltura=0;
    int i, cont=0;

    for(i=0;i<30;i++){
            printf("Digite a idade e altura: ");
            scanf("%f %f",&Aluno[i][0],&Aluno[i][1]);
            somaAltura+=Aluno[i][1];
    }
    for(i=0;i<30;i++){
        if(Aluno[i][0]>13 && (somaAltura/30)<Aluno[i][1]){
            cont++;
        }
    }
    printf("\n%i alunos!",cont);
    return 0;
}