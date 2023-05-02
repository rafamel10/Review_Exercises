/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada
por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.*/

#include <stdio.h>

int main(){
    float nota1, nota2, media;
    printf("1° nota: ");
    scanf("%f",&nota1);
    printf("2° nota: ");
    scanf("%f",&nota2);

    media=(nota1+nota2)/2;

    if(media==10)
        printf("Aprovado com Distinção!");
    else 
        if(media>=7)
        printf("Aprovado!");
        else 
            if(media<=7)
                printf("Reprovado!");
    
    
    return 0;
       
}
