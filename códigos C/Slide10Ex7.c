//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int a = 0, b = 1, valores, soma, contador;

    printf("Informe quantos termos de Fibonacci dever�o ser exibidos: ");
    scanf("%i", &valores);
    printf("\n");//usado para pular uma linha do resultado
    //contador para repetir quantas vezes o usu�rio digitar
    for (contador = 1;  contador <= valores; contador++) {
      soma = a + b;
      printf("O %i� valor da sequ�ncia �: %i\n\n",contador, soma);
      //invers�o de valores para pode realizar a sequ�ncia
      b = a;
      a = soma;
    }
return 0;
}
