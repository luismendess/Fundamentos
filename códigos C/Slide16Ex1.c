//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//fun��o para receber os valores e comparar qual � maior
int numeros(int valor1, int valor2, int valor3, int maior){
  //insere 0 no valor de maior, inicialmente
  maior = 0;

  printf("Insira o primeiro valor: ");
  scanf("%i", &valor1);
  printf("Insira o segundo valor: ");
  scanf("%i", &valor2);
  printf("Insira o terceiro valor: ");
  scanf("%i", &valor3);
  //verifica��o de qual � o maior valor
  if(valor1 > 0){
    //insere o valor em maior caso seja maior que 0
    maior = valor1;
  }//if
  if(valor2 > maior){
    //insere o valor em maior caso seja maior que o valor 1
    maior = valor2;
  }//if
  if(valor3 > maior){
    //insere o valor em maior caso seja maior que o valor 2
    maior = valor3;
  }//if
  //verifica se algum dos valores informados � negativo
  if(valor1 < 0 || valor2 < 0 || valor3 < 0){
    //caso seja, o valor final ser� -1
    maior = -1;
}
//retorna a vari�vel maior
  return maior;
}//numeros
//fun��o principal do c�digo
int main() {
  //permite o uso de acentos e �
  setlocale (LC_ALL, "portuguese");
  //declara��o de vari�veis
  int maior, valor1, valor2, valor3;
  //determina qual o maior valor a partir dos valores da outra fun��o
  maior = numeros(valor1, valor2, valor3, maior);
  //exibe o maior valor
  printf("\nO maior valor �: %i\n\n", maior);

  return 0;
}//main
