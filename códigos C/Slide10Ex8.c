//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int multiplicando, multiplicador, resultado;
    //estrutura de repeti��o para exibir 10 vezes o valor da tabuada
    for(multiplicador = 1; multiplicador <= 10; multiplicador++){
      printf("\nTabuada do %i:\n", multiplicador);
      //estrutura de repeti��o que exibir� os 10 valores que ir�o multiplicar
      for(multiplicando = 1; multiplicando <= 10; multiplicando++){
        resultado = multiplicador * multiplicando;
        printf("%i x %i = %i\n", multiplicador, multiplicando, resultado);
      }
    }

return 0;
}
