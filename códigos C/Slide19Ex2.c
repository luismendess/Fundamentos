//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //fun��o principal do c�digo
  int main(){
    //permite o uso de acento e �
    setlocale(LC_ALL, "portuguese");
    float vetor[10];
    //passa por cada posi��o do vetor
    for(int i = 0; i < 10; i++){
      //exibe o endere�o de cada posi��o do vetor
      printf("o endere�o �: %p\n", &vetor[i]);
    }//for
    printf("\n");

    return 0;
  }//main
