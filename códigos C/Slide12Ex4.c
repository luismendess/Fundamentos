//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int l, c, matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}}, matrizC[2][3];

  //repete o c�lculo de cada posi��o por 5
  for(l = 0; l < 2; l++){
    for (c = 0; c < 3; c++){
      //multiplica o valor de cada posi��o por 5 e insere na matriz C
      matrizC[l][c] = matrizA[l][c] * 5;
    }//for interno
  }//for externo
  printf("A matriz C gerada a partir da matriz A �:\n");
  //verifica o valor de cada posi��o para a exibi��o
  for(l = 0; l < 2; l++){
    printf("\n");
    printf("|");
		for (c = 0; c < 3; c++){
      //exibe a matriz C que est� com os valores j� multiplicados
      printf(" %i |", matrizC[l][c]);
    }//for interno
  }//for externo
printf("\n\n");

return 0;
}//main
