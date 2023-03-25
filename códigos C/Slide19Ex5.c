//Declara��o de Vari�veis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void ComparaString(char* ponteiro1, char* ponteiro2) {

  char *comparacao = strstr(ponteiro1, ponteiro2);

  if (comparacao){
    printf("A primeira string cont�m a segunda\n\n");
  }else{
    printf("A primeira string n�o cont�m a segunda\n\n");
  }//else
  return;
}//ComparaString

//Fun��o Principal
int main (){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //Declara��o de vari�veis
  char string1[100], string2[100];

  printf("Digite um uma frase: ");
  fgets(string1, 100, stdin);
  string1[strcspn(string1,"\n")] = '\0';
  fflush(stdin);

  printf("Digite algo da primeira frase: ");
  fgets(string2, 100, stdin);
  string2[strcspn(string2,"\n")] = '\0';
  fflush(stdin);
  //Declara dois ponteiros que recebem o endere�o de mem�ria das duas strings
  char *ponteiro1 = string1;
  char *ponteiro2 = string2;
  printf("\n");
  //Chama a fun��o ComparaString
  ComparaString(ponteiro1, ponteiro2);

  return 0;
}//main
