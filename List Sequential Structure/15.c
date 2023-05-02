/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:*/

#include <stdio.h>

int main(){
    float valorHora, horasTrabalhadas, salario;

    printf("Valor recebido por hora: ");
    scanf("%f",&valorHora);
    printf("Quantidade de horas trabalhadas no mês: ");
    scanf("%f",&horasTrabalhadas);

    salario=valorHora*horasTrabalhadas;

    printf("\n+ Salário bruto : R$%.2f\n- IR (11%) : R$%.2f\n- INSS (8%) : R$%.2f\n- Sindicato (5%) : R$%2.f\n= Salário líquido : R$%.2f",salario,salario*0.11,salario*0.08,salario*0.05,salario-(salario*0.24));

    return 0;
}
