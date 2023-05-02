/*Faça um Programa que verifique se uma letra digitada é vogal ou consoante.*/
#include <stdio.h>

void VerificaVogal(char letra){
    switch(letra){
        case 'a':
            printf("É vogal!");
            break;
        case 'A':
            printf("É vogal!");
            break;
        case 'e':
            printf("É vogal!");
            break;
        case 'E':
            printf("É vogal!");
            break;
        case 'i':
            printf("É vogal!");
            break;
        case 'I':
            printf("É vogal!");
            break;
        case 'o':
            printf("É vogal!");
            break;
        case 'O':
            printf("É vogal!");
            break;
        case 'u':
            printf("É vogal!");
            break;
        case 'U':
            printf("É vogal!");
            break;
        default:
            printf("\nÉ Consoante!");
            break;

    }
}

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c",&letra);

    VerificaVogal(letra);

    return (0);
    
}
