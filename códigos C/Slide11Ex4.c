//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o das vari�veis
  int vetor[8], v=0, soma=0;
  for(v = 0; v < 8; v++){
    printf("Informe o %i� valor: ", v+1);
    scanf("%i", &vetor[v]);
    soma = soma + vetor[v];
  }//for
  printf("\nA soma dos valores inseridos �: %i\n\n", soma);

return 0;
}//main
