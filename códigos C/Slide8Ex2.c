//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int contador = 100;
    //estrutura while com condi��o de repetir enquanto maior ou igual a 1
    while(contador >= 1){
      printf("%i\n", contador);
      //subtrai 1 ao valor contador
      contador--;
    }

return 0;
}
