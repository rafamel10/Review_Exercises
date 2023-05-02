/*Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, 
e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
  Média de Aproveitamento  Conceito
  Entre 9.0 e 10.0        A
  Entre 7.5 e 9.0         B
  Entre 6.0 e 7.5         C
  Entre 4.0 e 6.0         D
  Entre 4.0 e zero        E*/

#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
     media=(nota1+nota2)/2;
     
     if(media>=9)
        printf("Conceito A");
    else if(media>=7.5 && media<9)
        printf("Conceito B");
    else if(media>=6 && media<7.5)
        printf("Conceito C");
    else if(media>=4 && media<6)
        printf("Conceito D");
    else if(media<4 && media>0)
        printf("Conceito E");

        return 0;
}