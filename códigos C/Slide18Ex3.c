//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int n){
  //caso base
  if(n == 0){
    return 1;
  }else{
  return (n*f(n-1));
  }//else
}//fatorial

int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int n, valor;

  printf("Insira um valor para calcular o fatorial:");
  scanf("%i", &n);
  valor = fatorial(n);
  printf("O valor de fatorial(%i) = %i ",n, valor);
  return 0;
}//main
