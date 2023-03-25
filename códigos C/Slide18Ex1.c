//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int mult(int x, int y){
    int soma = 0;
    //caso base
    if (x == 0 || y == 0){
      //returna 0 para o caso base
      return 0;
    } else {
      //retorno da fun��o para valores que n�o sejam do caso base
      return y + mult(x-1, y);
    }//else
  }//fun��o mult

  //fun��o principal do c�digo
  int main(){
    //permite o uso de acento e �
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int x, y, resultado;

    printf("Insira o valor de X:");
    scanf("%i", &x);
    printf("Insira o valor de Y:");
    scanf("%i", &y);
    resultado = mult(x, y);
    printf("\n%i\n\n", resultado);
    return 0;
}//main
