//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int l=0, c=0, matriz[3][3], somaprincipal=0, somasecundaria=0;
  //estrutura de repeti��o aninhada para cria��o da matriz
	for(l = 0; l < 3; l++){
		for (c=0; c < 3; c++){
      //pede para que o usu�rio insira todos os valores da matriz
      printf("Insira o valor da %i� linha e %i� coluna: ", l+1, c+1);
      scanf("%i", &matriz[l][c]);
    }//for interno
  }//for externo
  //soma os valores de cada posi��o espec�fica da diagonal principal
  somaprincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
  //soma os valores de cada posi��o espec�fica da diagonal secund�ria
  somasecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
  //exibe a soma dos valores de cada diagonal
  printf("\nA soma da diagonal principal �: %i\n", somaprincipal);
  printf("A soma da diagonal secund�ria �: %i", somasecundaria);
  printf("\n\n");

return 0;
}//main
