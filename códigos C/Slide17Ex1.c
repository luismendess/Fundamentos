//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//fun��o para converter segundos em horas, minutos e segundos
void converteHora(int total_segundos, int* hora, int* min, int* seg){

  printf("Digite a quantidade de segundos: ");
  scanf("%d", &total_segundos);
  //converte segundos em minutos
  while(total_segundos >= 60){
    (*min) = total_segundos / 60;
    total_segundos = ((total_segundos / 60) % 60);
  }//while
  //converte minutos em horas
  while(*min >= 60){
    (*hora) = *min / 60;
    (*min) = ((*min / 60) % 60);
  }//while
  (*seg) = total_segundos;

  return;
}//fun��o converteHora
//fun��o principal do c�digo
int main(){
  //permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int total_segundos, hora, minuto, segundo;
  //chama a fun��o converteHora para a fun��o principal
  converteHora (total_segundos, &hora, &minuto, &segundo);
  printf("%d:%d:%d \n\n", hora, minuto, segundo);

  return 0;
}//main
