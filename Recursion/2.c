/*Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

#include <stdio.h>

int fibonacci(int num){
    int fib=0;
    if(num<=1){
        return num;
    }
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
    
}

int main(){
    int n,i;
    printf("Digite o N-ésimo termo: ");
    scanf("%i",&n);

    printf("\nSequência de Fibonacci:\n");

    for(i=0;i<n;i++){
        printf("%i ",fibonacci(i));
    }
    return 0;
}