/*Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas,
dezenas e unidades do mesmo.
Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
326 = 3 centenas, 2 dezenas e 6 unidades
12 = 1 dezena e 2 unidades Testar com: 
326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16*/

#include <stdio.h>

void ImprimeNumero(int num){
    int centena, dezena, unidade;
    centena=num/100;
    dezena=num/10-centena*10;
    unidade=num-(centena*100+dezena*10);
    if(centena>0)
        printf("\n%i = %i centenas, %i dezenas e %i unidades.",num,centena,dezena,unidade);
    else if(dezena>0)
            printf("\n%i = %i dezenas e %i unidades.",num,dezena,unidade);
        else
        printf("\n%i = %i unidades.",num,unidade);
}



int main(){
    int num;
    printf("Digite um número:");
    scanf("%i",&num);
    ImprimeNumero(num);
    return (0);

}
