//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o das vari�veis
  float soma, media;
  int vetor[20], v, iguais=0, maiormedia=0, igualmedia=0;
  //estrutura de repeti��o para inser��o de valores at� 20 vezes
  for(v = 0; v < 20; v++){
    printf("Insira o %i� valor vetor: ", v+1);
    scanf("%i", &vetor[v]);
    //soma de todos os valores inseridos
    soma += vetor[v];
  }
  //c�lculo da m�dia de todos os valores inseridos
  media = soma / 20;
  //estrutura de repeti��o para verifica��o dos 20 valores
  for(v = 0; v < 20; v++){
    //verifica se algum valor do vetor � igual a 30
    if(vetor[v] == 30){
      iguais++;
    }//if
    //verifica se algum valor do vetor � maior que a m�dia
    if(vetor[v] > media){
      maiormedia++;
    }//if
    //verifica se algum valor � igual a m�dia
    if(vetor[v] == media){
      igualmedia++;
    }//if
  }//for
  printf("\n%i n�meros s�o iguais a 30.\n", iguais);
  printf("%i n�meros s�o maiores que � m�dia.\n", maiormedia);
  printf("%i n�meros s�o iguais � m�dia.\n\n", igualmedia);

return 0;
}//main
