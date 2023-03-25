//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//fun��o para receber uma m�dia e verificar qual o respectivo conceito
float mediafinal(float media){
  //declara��o de vari�veis
  char conceito;

  printf("Insira a m�dia final do Aluno: ");
  scanf("%f", &media);
  //verifica o intervalo ao qual a media final pertence
  if(media >= 9 && media <= 10){
    //insere o valor A em conceito
    conceito = 'A';
  } else if (media >= 7 && media <= 8){
    //insere o valor B em conceito
    conceito = 'B';
  } else if (media >= 5 && media <= 6){
    //insere o valor C em conceito
    conceito = 'C';
  } else if (media >= 0 && media <= 4){
    //insere o valor D em conceito
    conceito = 'D';
  }else{
    printf("A m�dia inserida � inv�lida\n\n");
  }//else
  //retorna o valor de conceito
  return conceito;
}//mediafinal
//fun��o principal do c�digo
int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  float media;
  char conceito;
  //insere o valor da fun��o mediafinal em conceito
  conceito = mediafinal(media);
  printf("\nO conceito do aluno �: %c\n\n", conceito);

  return 0;
}//main
