//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o das vari�veis
  int vetorA[5], vetorB[5], vetorsoma[5], v=0;
  //estrutura de repeti��o, para receber 5 valores para o vetor A
  for(v = 0; v < 5; v++){
    printf("Informe o %i valor do 1� vetor: ", v+1);
    scanf("%i", &vetorA[v]);
  }//for vetor A
  printf("\n");//quebra de linha para separar leitura de valores de A e B
  //estrutura de repeti��o, para receber 5 valores para o vetor B
  for(v = 0; v < 5; v++){
    printf("Informe o %i valor do 2� vetor: ", v+1);
    scanf("%i", &vetorB[v]);
  }//for vetor B
  printf("\n");//quebra de linha para separar leitura dos valores de B e resultado
  printf("A soma dos vetores �: \n");
  //estrutura de repeti��o para exibir todos os valores do vetor soma
  for(v = 0; v < 5; v++){
    //armazenando a soma dos vetores A e B no vetor soma
    vetorsoma[v] = vetorA[v] + vetorB[v];
    printf("| %i |", vetorsoma[v]);//exibi��o da soma com um �nico printf
}//for resultado
  printf("\n");
return 0;
}//main
