#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int A = 40, B = -1, soma, subtracao, multip, divisao, cont;

    printf("**Iniciando c�lculos!**\n\n");
    printf("-Adi��o:\n");
    soma = A + B;
    printf("O resultado da adi��o �: %i\n\n", soma);
    printf("-Subtra��o:\n");
    subtracao = A - B;
    printf("O resultado da subtra��o �: %i\n\n", subtracao);
    printf("-Multiplica��o:\n");
    multip = A * B;
    printf("O resultado da multiplica��o �: %i\n\n", multip);
    printf("-Divis�o:\n");
    divisao = A / B;
    printf("O resultado da divis�o �: %i\n\n", divisao);

    B++;

    printf("**Iniciando c�lculos!**\n\n");
    printf("-Adi��o:\n");
    soma = A + B;
    printf("O resultado da adi��o �: %i\n\n", soma);
    printf("-Subtra��o:\n");
    subtracao = A - B;
    printf("O resultado da subtra��o �: %i\n\n", subtracao);
    printf("-Multiplica��o:\n");
    multip = A * B;
    printf("O resultado da multiplica��o �: %i\n\n", multip);
    printf("-Divis�o:\n");
    divisao = A / B;
    printf("O resultado da divis�o �: %i\n\n", divisao);
    return 0;
}
