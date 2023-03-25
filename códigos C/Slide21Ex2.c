//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Escreva um programa que leia do usu�rio os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conte�do dos
dois primeiros juntos (o conte�do do primeiro seguido do conte�do do
segundo).*/

void concatenar_arquivos( FILE *alterar, FILE *copia){
  char alterar_arquivo [1000];

  while (fgets (alterar_arquivo, sizeof alterar_arquivo, copia) != NULL){
    fputs (alterar_arquivo, alterar);
  }//while
}//contatenar_arquivos

//fun��o main
int main(){
  //para poder utilizar pontua��es
  setlocale(LC_ALL, "");
  //declara��o de vari�veis
  char arquivo1[400];
  char arquivo2[400];
  //solicita o nome do primeiro arquivo
  printf("Digite o nome do primeiro arquivo de texto: ");
  fgets(arquivo1, 400, stdin);
  //Subscreve o \n por \0
  arquivo1[strcspn(arquivo1,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //verifica��o se o arqivo est� no diret�rio
  //solicita o nome do segundo arquivo
  printf("Digite o nome do segundo arquivo de texto: ");
  fgets(arquivo2, 400, stdin);
  //Subscreve o \n por \0
  arquivo2[strcspn(arquivo2,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //verifica��o se o arqivo est� no diret�rio
  //abrindo arquivos
  FILE *arq1 = fopen(arquivo1, "r");
  FILE *arq2 = fopen(arquivo2, "r");
  FILE *arq3 = fopen("teste3.txt", "a");
  //verificando se o arquivo est� no diret�rio
  if(arq1 == NULL){
    perror("Erro ao abrir arquivo 1!");
    printf("\n");
    exit(1);
  }//if
  //verificando se o arquivo est� no diret�rio
  if(arq2 == NULL){
    perror("Erro ao abrir arquivo 2!");
    printf("\n");
    exit(1);
  }//if
  //verificando se o arquivo est� no diret�rio
  if(arq3 == NULL){
    perror("Erro ao abrir arquivo 2!");
    printf("\n");
    exit(1);
  }//if
  //concatenado arquivo 1 e 3
  concatenar_arquivos(arq3, arq1);
  //concatenando arquivo 2 e 3
  concatenar_arquivos(arq3, arq2);
  //fechando os arquivos ap�s l�-los e modific�-los
  fclose (arq1);
  fclose (arq2);
  fclose (arq3);

return 0;
}//main
