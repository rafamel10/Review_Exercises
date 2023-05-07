/* Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N*/

#include <stdio.h>

int fatorial(int num){
    if(num==0){
        return 1;
    }
    return num*fatorial(num-1);
}

int main(){
    int A;

    printf("Digite um número:");
    scanf("%i",&A);
    printf("Fatorial de %i = %i",A,fatorial(A));
    return 0;

}