/*Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.*/
#include <stdio.h>

int VerificaVogal(char Letra){
    switch (Letra){
    case 'A':
        return 0;
    case 'a':
        return 0;
    case 'E':
        return 0;
    case 'e':
        return 0;
    case 'I':
        return 0;
    case 'i':
        return 0;
    case 'O':
        return 0;
    case 'o':
        return 0;
    case 'U':
        return 0;
    case 'u':
        return 0;
    default:
        return 1;    
    }
}

int main(){
    char Vet[10];
    int i, cont=0;
    
     for(i=0;i<10;i++){
        printf("Digite o %i° caractere: ",i+1);
        scanf(" %c",&Vet[i]); //Usa um espaço pois pode dar erro na leitura de caractere, lendo uma quebra de linha quando se dá o enter.
        }

    for(i=0;i<10;i++){
        if(VerificaVogal(Vet[i])==1){
            printf("%c\t",Vet[i]);
            cont++;
        }
        
    }
    printf("\nHá %i consoantes!",cont);
    return 0;
}