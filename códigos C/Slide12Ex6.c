  //declara��o de bibliotecas
  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>


  int main(){
    //permite o uso de acentos e �
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int l, c, matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}}, matrizD[3][2] = {{1, 2}, {5, 6}, {2, 3}};
    int matrizAD[2][2];
    //repete o c�lculo de cada posi��o por 5
    for(l = 0; l < 2; l++){
      for (c = 0; c < 2; c++){
        //faz o c�lculo de cada valor das matrizes anteriores pela posi��o e insere em AD
        matrizAD[0][0] = matrizA[0][0] * matrizD[0][0] + matrizA[0][1] * matrizD[1][0] + matrizA[0][2] * matrizD[2][0];
        matrizAD[0][1] = matrizA[0][0] * matrizD[0][1] + matrizA[0][1] * matrizD[1][1] + matrizA[0][2] * matrizD[2][1];
        matrizAD[1][0] = matrizA[1][0] * matrizD[0][0] + matrizA[1][1] * matrizD[1][0] + matrizA[1][2] * matrizD[2][0];
        matrizAD[1][1] = matrizA[1][0] * matrizD[0][1] + matrizA[1][1] * matrizD[1][1] + matrizA[1][2] * matrizD[2][1];
      }//for interno
    }//for externo
    printf("A matriz AD �: \n");
    //estrutura de repeti��o para gerar a matriz AD
    for(l = 0; l < 2; l++){
      printf("\n");
      printf(" |");
  		for (c = 0; c < 2; c++){
        //exibe a matriz C que est� com os valores j� multiplicados
        printf(" %i |", matrizAD[l][c]);
      }//for interno
    }//for externo
  printf("\n\n");

  return 0;
  }//main
