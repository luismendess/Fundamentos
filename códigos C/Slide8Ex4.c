//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int valor = 240;
    //estrutura while com condi��o de repetir enquanto maior que 240 e menor ou igual a 730
    while(valor <= 730){
      //condicional para verificar se os valores contados s�o multiplos de 3
      if(valor%2 == 0){
      printf("%i\n", valor);
      }
      //adiciona 1 ao valor contador
      valor++;
    }

return 0;
}
