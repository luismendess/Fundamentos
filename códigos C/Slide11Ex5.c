//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //setlocale que permite acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o das vari�veis
  int vetorA[4], vetorB[5], a, b;
  //estrutura de repeti��o, para receber 4 valores para o vetor A
  for(a = 0; a < 4; a++){
    printf("Insira o %i� valor do 1� vetor: ", a+1);
    scanf("%i", &vetorA[a]);
  }//for vetor A
  printf("\n");
  //estrutura de repeti��o, para receber 5 valores para o vetor B
  for(a = 0; a < 5; a++){
    printf("Insira o %i� valor do 2� vetor: ", a+1);
    scanf("%i",&vetorB[a]);
  }//for vetor B
  printf("\n");
  for(a = 0; a < 5; a++){
    for(b = 0; b < 4; b++) {
      //compara os valores dos dois vetores
      if(vetorB[a] == vetorA[b]){
      printf("%i est� nos dois vetores\n",vetorA[b]);
    }//for interno
  }//for externo
  printf("\n");

return 0;
}//main
