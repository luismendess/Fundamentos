//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //fun��o principal do c�digo
  int main(){
    //permite o uso de acento e �
    setlocale(LC_ALL, "portuguese");
    float matriz[3][3];
    //passa por cada posi��o do vetor
    for(int i = 0; i < 3; i++){
      printf("\nO %i� grupo de endere�os �: \n", i+1);
      for(int j = 0; j < 3; j++){
      //exibe o endere�o de cada posi��o do vetor
      printf("o endere�o %i �: %p\n",j+1, &matriz[i][j]);
    }//for interno
    }//for externo
    printf("\n");

    return 0;
  }//main
