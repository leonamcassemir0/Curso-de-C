// Referente as aulas 7, 8 e 9 (todas sobre variáveis).

#include <stdio.h>

int main()
{
    
    /*
    AULA 7 - CARACTERÍSTICAS

    4 características principais:
        1) Toda variavel possui um nome
        2) Toda variavel possui um tipo
        3) Toda variavel possui um tamanho
        4) Toda variavel possui valor

        a) Armazenamento é temporário.
        b) Quando um programa é fechado ou desligado, tudo que estiver na memória será apagado.
        c) Valores armazenados na memória são volatéis.
        d) O valor antigo da variavel será sobreposto.
    */

    int i;
    float f;
    char a, b;
    a = '1';
    b = '2';
    // Se não declarar o valor, ele joga um número qualquer
    i = 10;
    
    /*
    AULA 8 - NOMENCLATURA

    tipo nomeVariavel = valor;
    int      num      =   0  ;

    -> Começa com letra minúscula.
    -> Não pode começar com números.
        - Basta colocar _ no começo.
    -> Não pode conter espaços.
        - Podemos usar _ no lugar.
    */

    /*
    AULA 9 - TIPOS PRIMITIVOS

    1) char = caracter

    2) int = número inteiros positivos e negativos
        - Vai -32.000 até 32.000
    
    3) float = números de ponto flutuante
    
    4) void = vazio
    
    5) double = Guardar números com grandes floats.
    */
    return 0;
}