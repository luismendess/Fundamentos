//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int contador = 1;
    //estrutura while com condi��o de repetir enquanto menor ou igual a 100
    while(contador <= 100){
      printf("%i\n", contador);
      //adiciona 1 ao valor contador
      contador++;
    }

return 0;
}
