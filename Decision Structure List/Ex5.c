/*Faça um programa para a leitura de duas notas parciais de um aluno. 
O programa deve calcular a média alcançada por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.*/
#include <stdio.h>

void CalculaMedia(int num1,int num2){
    int media;
    media = (num1+num2)/2;
    if(media==10)
            printf("\nAprovado com distinção\nMédia: %i!",media);
    else 
        if(media<7)
            printf("\nReprovado!\nMédia: %i",media);   
        else
            printf("\nAprovado!\nMédia: %i",media);
    }

int main(){
    int num1, num2;
    printf("Digite a primeira nota:");
    scanf("%i",&num1);
    printf("\nDigite a segunda nota:");
    scanf("%i",&num2);

    CalculaMedia(num1,num2);

    return (0);
}