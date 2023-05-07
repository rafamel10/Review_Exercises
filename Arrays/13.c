/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. 
Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, 
e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).*/

#include <stdio.h>

char* imprimeMes(int mes){
    switch (mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        default:
            return "Mês inválido";
     }
}


int main(){
    float Vet[12][2],somaTemp=0;
    int i;

    for(i=0;i<12;i++){
        printf("Digite o mês e a temperatura: ");
        scanf("%i %f",&Vet[i][0],&Vet[i][1]);
        somaTemp+=Vet[i][1];
    }
    for(i=0;i<12;i++){
        if(Vet[i][1]>(somaTemp/12))
            printf("%s com %.2f C°",imprimeMes(Vet[i][0]),Vet[i][1]);
    }
    return 0;
}