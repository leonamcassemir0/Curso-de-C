#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1, nota2;
    printf("Digite suas duas notas:");
    scanf("%i %i", &nota1, &nota2);
    int media = (nota1 + nota2) / 2;

    if(media >= 7){
        printf("\n Voce foi APROVADO!");
    }
    else{
        printf("\n Voce foi REPROVADO!");
    }

    return 0;
}