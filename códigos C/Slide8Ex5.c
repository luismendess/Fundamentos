//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int contador = 1, valor, resultado;
    //estrutura while com condi��o de repetir 10 vezes
    while(contador >= 1 && contador <= 10){
      printf("Informe o valor a ser calculado: ");
      scanf("%i", &valor);
      //fun��o pow n�o da certo no 10 e 11 ao quadrado
      resultado = valor * valor;
      printf("O valor ao quadrado �: %i\n\n", resultado);
      contador++;
    }


return 0;
}
