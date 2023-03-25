//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//fun��o que recebe um valor e calcula seu fatorial
int fatorial(int numero){
  //declara��o de vari�veis
  int fat = 1;

  printf("Insira um valor, para calcularmos o fatorial: ");
  scanf("%i", &numero);
  //repeti��o, que multiplica e diminui o valor em 1 em looping, at� chegar em 1
  while(numero > 0){
    fat *= numero;
    numero--;
  }//while
  //retorna o valor final do looping em fat
  return fat;
}//fatorial
//fun��o principal do c�digo
int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int numero, fat;
  //insere o valor da fun��o fatorial em fat
  fat = fatorial(numero);
  printf("\nO fatorial do valor inserido �: %i\n\n", fat);

  return 0;
}//main
