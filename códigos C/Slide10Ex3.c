//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder usar o � e acentos
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int numeros;
    //estrutura for de repeti��o, que come�a em 1, e faz uma contagem at� 500
    for (numeros = 1; numeros <=500; numeros++) {
      //condicional que verifica se o n�mero � m�ltiplo de 5
      if(numeros%5 == 0){
      printf("%i\n", numeros);
      }
    }
return 0;
}
