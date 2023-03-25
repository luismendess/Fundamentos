//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//estrutura para informa��es de Bandas
typedef struct{
  char nome[50];
  char genero[50];
  int integrantes;
  int posicao;
}Bandas;
//fun��o para inserir os valores das 5 bandas
void preenchebandas(Bandas bandas[5]){
  //passa por todas as posi��es do vetor
  for(int i = 0; i < 5; i++){
    //pede o nome
    printf("Digite o nome da banda: ");
    fgets(bandas[i].nome, 50, stdin);
    bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0';
    fflush(stdin);
    //pede o G�nero
    printf("Digite o G�nero da sua banda: ");
    fgets(bandas[i].genero, 50, stdin);
    bandas[i].genero[strcspn(bandas[i].genero, "\n")] = '\0';
    fflush(stdin);
    //pede o n�mero de integrantes da banda
    printf("Digite o n�mero de integrantes: ");
    scanf("%i", &bandas[i].integrantes);
    fflush(stdin);
    //pede a posi��o no ranking pessoal
    printf("Digite a posi��o do seu top 5 bandas favoritas: ");
    scanf("%i",&bandas[i].posicao);
    fflush(stdin);
    printf("\n");
  }//for
  //repeti��o para Exibir as 5 bandas inseridas
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\n",bandas[i].nome);
    printf("G�nero Musical: %s\n",bandas[i].genero);
    printf("N�mero de Integrantes: %i\n",bandas[i].integrantes);
    printf("Posi��o entre as favoritas: %i\n",bandas[i].posicao);
    printf("\n");
}//for exibindo todas bandas
  return;
}//fun��o preenchebanda
//fun��o para pedir a posi��o do raking e exibi-lo
void escolheposicao(int* p) {
  printf("Digite uma posi��o do seu ranking de bandas: ");
  scanf("%i", &*p);
  fflush(stdin);
  //retorna o valor inserido
  return;
}//funcao escolhegenero
//fun��o para pedir o g�nero musical que quiser listar
char escolhegenero(char estilo[50]){
    printf("\nInforme um G�nero Musical: ");
    fgets(estilo, 50, stdin);
    estilo[strcspn(estilo, "\n")] = '\0';
    fflush(stdin);
    //retorna o o G�nero inserido
    return estilo[50];
}//funcao escolhegenero
//fun��o para pedir o nome da banda que quiser listar
char nomebanda(char nome_banda[50]){
    printf("\nInsira o nome da Banda: ");
    fgets(nome_banda, 50, stdin);
    nome_banda[strcspn(nome_banda, "\n")] = '\0';
    fflush(stdin);
    //retorna o nome da banda inserido
    return nome_banda[50];
}/// funcao nomebanda
//fun��o principal do c�digo
int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int p, i, opcao;
  char estilo[50], nome_banda[50];
  Bandas bandas[5];
  printf("-------------------------------\n");
  printf("Insira informa��es de 5 bandas:\n\n");
  printf("-------------------------------\n");
  //chama a fun��o preenchebandas para a fun��o principal
  preenchebandas(bandas);
  //estrutura para pedir alguma op��o enquanto quiser que funcione
  do {
  printf("\n");
  printf("|--------------------------------------------|\n");
  printf("|               Menu de Op��es               |\n");
  printf("|--------------------------------------------|\n");
  printf("|      1 - Exibir por Posi��o no Ranking     |\n");
  printf("|         2 - Exibir Lista por Genero        |\n");
  printf("|     3 - Exibir Lista por Nome da Banda     |\n");
  printf("|           4 - Fechar o programa            |\n");
  printf("|--------------------------------------------|\n");
  printf("Digite a op��o desejada: ");
  scanf("%i", &opcao);
  printf("\n");
  fflush(stdin);
  //estrutura de sele��o para escolher o que quer fazer com as informa��es
  switch(opcao){
    //op��o 1
    case 1:
    //chama a fun��o escolheposicao para comparar e exibir a posi��o escolhida
    escolheposicao(&p);
    //verifica se est� dentro do intervalo do top 5
    if(p > 0 && p < 6){
      //verifica todas as posi��es do vetor
      for (int i = 0; i < 5; i++) {
        //verifica em qual das posi��es est� o valor informadoo
        if(p == bandas[i].posicao){
          printf("Nome: %s\n",bandas[i].nome);
          printf("Genero musical: %s\n",bandas[i].genero);
          printf("Numero de integrantes: %i\n",bandas[i].integrantes);
          printf("Posicao entre as favoritas: %i\n",bandas[i].posicao);
        }//if interno
      }//for
    }else{
      //se estiver fora do intervalo, exibe mensagem de erro
      printf("Valor inv�lido!!\n");
    }//else
    break;
    //op��o 2
    case 2:
    //chama a fun��o escolhegenero para a fun��o principal
    escolhegenero(estilo);
    //verifica todas as posi��es do vetor
    for (i = 0; i < 5; i++) {
      //se o o valor informado for igual a algum g�nero salvo, exibe os que o tiverem
      if (strcasecmp(estilo,bandas[i].genero) == 0) {
        printf("Nome: %s\n",bandas[i].nome);
        printf("Genero musical: %s\n",bandas[i].genero);
        printf("Numero de integrantes: %i\n",bandas[i].integrantes);
        printf("Posicao entre as favoritas: %i\n\n",bandas[i].posicao);
      }//if
    }//for
    break;
    //op��o 3
    case 3:
    //chama a fun��o nomebanda para a fun��o principal
    nomebanda(nome_banda);
    //verifica todas as posi��es do vetor
    for (i = 0; i < 5; i++) {
      //verifica qual banda tem o nome igual ao informado e exibe suas informa��es
      if (strcasecmp(nome_banda,bandas[i].nome) == 0) {
        printf("Nome: %s\n",bandas[i].nome);
        printf("Genero musical: %s\n",bandas[i].genero);
        printf("Numero de integrantes: %i\n",bandas[i].integrantes);
        printf("Posicao entre as favoritas: %i\n\n",bandas[i].posicao);
      }//if
    }//for
    break;
    //op��o 4
    case 4:
    //exibe mensagem de encerramento
    printf("Encerrando o programa. . . \n\n");
    return 0;
    break;
    //caso a op��o inserida esteja fora do intervalo aceito, exibe mensagem de Encerrando
    default:
    printf("Op��o Inv�lida!!\n");
    break;
  }//switch
} while(opcao != 4);
  return 0;
}//main
