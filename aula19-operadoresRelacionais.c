#include <stdio.h>
#include <stdlib.h>

int main(){
    int iJ = 17;
    int iI = 60;
    int idade = 0;
    printf("Digite a idade:");
    scanf("%i", &idade);

    if(idade <= iJ){
        printf("Voce eh um jovem.");
    }else{
        if(idade >= iI){
            printf("Voce eh um idoso");
        }else{
            printf("Voce esta na meia-idade");
        }
    }

    return 0;
}