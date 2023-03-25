//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int eleva(int x, int y){
  //declara��o de vari�veis
  int soma = 0;
  if(y==0){
    return 1;
  }//primeiro caso base
  if(y==1){ //segundo caso base
    return x;
  }else{
    return x * eleva(x, y - 1);
  }//else
}//eleva

//fun��o principal do c�digo
int main(){
  //permite o uso de acento e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int x, y, resultado;

  printf("Insira o valor da base:");
  scanf("%i", &x);
  printf("Insira o valor do expoente:");
  scanf("%i", &y);

  resultado = eleva(x, y);
  printf("\n%i\n\n", resultado);
  return 0;
}
