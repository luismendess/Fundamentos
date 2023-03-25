//implementa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicia��o da fun��o main
int main (){
  //setlocale, que permite a utiliza��o de acentos e � no c�digo
  setlocale (LC_ALL, "portuguese");
  //declara��o de vari�veis
  long int individuos;//para aceitar grandes quantidades de indiv�duos
  int horas = 0, minutos = 0, segundos = 0, estalos = 0, resto;
  //pede ao indiv�duo poderoso que informe quantos seres ele quer
  printf("Senhor Supremo, diga-me quantos indiv�duos existem no universo: ");
  scanf("%i", &individuos);
  /*estrutura do/while para que repita a divis�o dos seres do univeros e conte quantas estaladas
  foram dadas*/
  do{
    individuos = (individuos/2);
    estalos++;
  }while (individuos > 500);//condi��o que faz encerrar quando for menor que 500
  //calcula que a cada estalada � necess�rio 5 segundos de descanso
  segundos = estalos*5;
  //calcula que 1 hora tem 3600 segundos
  horas = segundos / 3600;
  //calcula com % para poder inserir o resto das horas em minutos e segundos
  resto = segundos % 3600;
  /*calcula que 1 minuto tem 60 segundos usando o "resto",
  para exibir os minutos que sobraram de horas*/
  minutos = resto / 60;
  /*calcula usando resto como vari�vel e % para exibir os segundos,
  independente se tem ou n�o minutos ou horas*/
  segundos = resto % 60;
  //exibe quanto tempo o indiv�duo poderoso levou para chegar em sua estimada ambi��o
  printf("\nSenhor Supremo, o senhor levou %ih:%im:%is\n\n", horas, minutos, segundos);
return 0;
}//main
