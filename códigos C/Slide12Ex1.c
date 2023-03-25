//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int l, c, matriz[5][5], soma[5];
  //estrutura de repeti��o aninhada para cria��o da matriz original
	for(l = 0; l < 5; l++){
		for (c=0; c < 5; c++){
      //estrutura condicional para verificar a diagonal principal e, se for,
      //insere o valor 1, caso n�o seja, insere o valor 0.
			if(l == c){
				matriz[l][c] = 1;
			} else {
				matriz[l][c] = 0;
			}//else
		}//for interno
	}//for externo
  printf("A matriz identidade �: \n\n");
  //for aninhado para gerar a matriz identidade
	for(l = 0; l < 5; l++){
    //para adicionar uma barra antes de cada linha (est�tica)
    printf("| ");
		for (c=0; c < 5; c++){
      //insere na matriz soma a soma dos valores da matriz soma e da matriz original
			soma[c] = soma[c]+(matriz[l][c]);
      //exibe a matriz soma, que agora � uma matriz identidade
			printf(" %i  ", matriz[l][c]);
		}//for interno
    //para adicionar uma barra depois de cada linha (est�tica)
    printf("| ");
		printf("\n\n");
	}//for externo

	return 0;
}//main
