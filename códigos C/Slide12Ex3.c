//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int l=0, c=0, matriz[5][5], maiorvalor=0, posicaol=0, posicaoc=0;
  //estrutura de repeti��o aninhada para cria��o da matriz
	for(l = 0; l < 5; l++){
		for (c=0; c < 5; c++){
      //pede para que o usu�rio insira todos os valores da matriz
      printf("Insira o valor da %i� linha e %i� coluna: ", l+1, c+1);
      scanf("%i", &matriz[l][c]);
      //verifica se o valor inserido � o maior
      if(matriz[l][c] > maiorvalor){
        //caso seja, ser� inserido em maiorvalor, para ser salvo
        maiorvalor = matriz[l][c];
        //pega a posi��o da linha e coluna e salva para ser usado depois;
        posicaol = l;
        posicaoc = c;
      }//if
    }//for interno
  }//for externo
  //cria a matriz 5x5
  for(l = 0; l < 5; l++){
    printf("\n");
		for (c=0; c < 5; c++){
      printf("   %i   ", matriz[l][c]);
    }//for interno
  }//for externo
  printf("\n\nO maior valor �: %i\n", maiorvalor);
  printf("E est� na posi��o (%i, %i)\n\n", posicaol+1, posicaoc+1);

return 0;
}//main
