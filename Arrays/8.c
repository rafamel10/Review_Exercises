/* Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. 
Imprima a idade e a altura na ordem inversa a ordem lida.*/

#include <stdio.h>
int main(){
    int idade[5], i;
    float altura[5];

    for(i=0;i<5;i++){
        printf("Digite a idade e a altura: ");
        scanf("%i %f",&idade[i],&altura[i]);
    }
    for(i=4;i>=0;i--){
        printf("idade[%i] altura[%.2f]\n",idade[i],altura[i]);
    }
    return 0;
}