//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //fun��o principal do c�digo
  int main(){
    //permite o uso de acento e �
    setlocale(LC_ALL, "portuguese");
    //declara��o de Vari�veis
    int x, a, *b = &x, **c = &b, ***d = &c;

    printf("Insira um valor: ");
    scanf("%d", &a);
    *b = (a * 2);
    printf("\nO dobro do valor �: %i\n", *b);
    **c = *b + a;
    printf("O triplo do valor �: %i\n", **c);
    ***d = **c + a;
    printf("O qu�druplo do valor �: %i\n\n", ***d);

    return 0;
  }//main
