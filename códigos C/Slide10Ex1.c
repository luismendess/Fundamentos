//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int contador;
    //estrutura for de repeti��o, que come�a em 1, e faz uma contagem at� 100
    for (contador = 1; contador <=100; contador++) {
      printf("%i\n", contador);
    }

return 0;
}
