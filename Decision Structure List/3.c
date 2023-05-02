/*Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.*/
#include <stdio.h>

int main(){
    char Sexo;
    printf("Digite seu sexo\n (M) Masculino\n (F) Feminino\n");
    scanf("%c",&Sexo);

    if(Sexo == 'M'|| Sexo =='m') //Selecionar as condições um por uma para comparação
        printf("\nSeu sexo é Masculino!");
    else 
        if(Sexo == 'F'|| Sexo =='f'){
            printf("\nSeu sexo é Feminino!");
        }
        else
            printf("\nSexo inválido!");
    return 0;
}
