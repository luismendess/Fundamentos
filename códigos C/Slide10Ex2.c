//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder usar o � e acentos
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int contador;
    //estrutura for de repeti��o, que come�a em 100, e reduz uma contagem at� 1
    for (contador = 100; contador >=1; contador--) {
      printf("%i\n", contador);
    }

return 0;
}
