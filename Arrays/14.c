/* Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
"Telefonou para a vítima?"
"Esteve no local do crime?"
"Mora perto da vítima?"
"Devia para a vítima?"
"Já trabalhou com a vítima?" 
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", 
entre 3 e 4 como "Cúmplice" e 5 como "Assassino". 
Caso contrário, ele será classificado como "Inocente".*/

#include <stdio.h>
#include <string.h>

char* VerificaAssassino(int num){
    switch (num)
    {
    case 2:
        return "Suspeito!";
    case 3:
        return "Cúmplice!";
    case 4:
        return "Cúmplice!";
    
    case 5:
        return "Assassino!";
    default:
        return "Inocente!";
    }
}

int main(){
    char Pergunta[5][50] = {
        "Telefonou para a Vítima?",
        "Esteve no local do crime?",
        "Mora perto da vítima?",
        "Devia para a vítima?",
        "Já trabalhou com a vítima?"
    };
    int Resposta[5], verificador=0, i;

    printf("Digite 1 para sim e 0 para não!\n");
    
    for(i=0;i<5;i++){
        printf("%s ", Pergunta[i]);
        scanf("%i",&Resposta[i]);
        verificador+=Resposta[i];
    }
    printf("%s", VerificaAssassino(verificador));
    return 0;
}
