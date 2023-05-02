/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver 
o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, 
baseado no salário atual:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.*/

#include <stdio.h>

int main(){
    float salario,valorAumento,novoSalario;
    printf("Salário do colaborador: ");
    scanf("%f",&salario);

    if(salario<=280){
        valorAumento=salario*0.2;
        novoSalario=salario+valorAumento;
        printf("Salário anterior = R$%.2f\nPercentual de aumento 20%\nValor do aumento = R$%.2f\nNovo salário = R$%.2f",salario,valorAumento,novoSalario);
         }
    else if(salario>280 && salario<=700){
        valorAumento=salario*0.15;
        novoSalario=salario+valorAumento;
        printf("Salário anterior = R$%.2f\nPercentual de aumento 15%\nValor do aumento = R$%.2f\nNovo salário = R$%.2f",salario,valorAumento,novoSalario);
         }
    else if(salario>700 && salario<=1500){
        valorAumento=salario*0.1;
        novoSalario=salario+valorAumento;
        printf("Salário anterior = R$%.2f\nPercentual de aumento 10%\nValor do aumento = R$%.2f\nNovo salário = R$%.2f",salario,valorAumento,novoSalario);
         }
    else if(salario<1500){
        valorAumento=salario*0.05;
        novoSalario=salario+valorAumento;
        printf("Salário anterior = R$%.2f\nPercentual de aumento 5%\nValor do aumento = R$%.2f\nNovo salário = R$%.2f",salario,valorAumento,novoSalario);
         }
    
    
    return 0;
}