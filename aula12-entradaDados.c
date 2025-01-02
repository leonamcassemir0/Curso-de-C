#include <stdio.h>
#include <stdlib.h>

int main(){
    // scanf("%tipo", &variavel_que_recebera)
    // O & é para dizer o caminho da variável.

    int num1, num2;
    printf("Digite um numero: ");
    scanf("%i", &num1);
    
    printf("Digite outro numero: ");
    scanf("%i", &num2);

    int soma = num1 + num2;
    printf("A soma dos dois numeros e: %i", soma);
    
    return 0;
}