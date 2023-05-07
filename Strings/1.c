/*Tamanho de strings. Faça um programa que leia 2 strings e informe o conteúdo delas seguido do seu comprimento. 
Informe também se as duas strings possuem o mesmo comprimento e são iguais ou diferentes no conteúdo.

Compara duas strings
String 1: Brasil Hexa 2006
String 2: Brasil! Hexa 2006!
Tamanho de "Brasil Hexa 2006": 16 caracteres
Tamanho de "Brasil! Hexa 2006!": 18 caracteres
As duas strings são de tamanhos diferentes.
As duas strings possuem conteúdo diferente.*/

#include <stdio.h>
#include <string.h>
#include <locale.h> //biblioteca para reconhecer acentuação e caractéres especiais

#define Max 30

int main(){
    setlocale(LC_ALL,"portuguese"); //biblioteca para reconhecer acentuação e caractéres especiais

    char stringA[Max], stringB[Max];

    printf("1° conteúdo: ");
    fgets(stringA, Max, stdin); //stdin é a entrada padrão pelo teclado

    printf("2° conteúdo: ");
    fgets(stringB, Max, stdin);

    printf("%s: %i caracteres\n%s: %i caracteres",stringA,strlen(stringA),stringB,strlen(stringB));

    if(strlen(stringA)==strlen(stringB) && strcmp(stringA, stringB)==0){
        printf("As duas strings possuem tamanhos e conteúdo iguais!\n");
        }
    else if(strlen(stringA)==strlen(stringB) && strcmp(stringA, stringB)!=0){
        printf("As duas strings possuem tamanhos iguais e conteúdos diferentes!\n");
        }
        else{
            printf("As duas strings são diferentes!\n");
        }

    return 0;

}