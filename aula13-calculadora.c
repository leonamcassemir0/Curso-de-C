#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Calculadora 1.0 \n");
    printf("Digite os dois valores a serem processados: \n");
    
    int num1, num2, soma, sub, multi, div;
    scanf("%i %i", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("A soma e: %i \n", soma);
    printf("A subtracao e: %i \n", sub);
    printf("A multiplicacao e: %i \n", multi);
    printf("A divisao e: %i", div);

    return 0;
}