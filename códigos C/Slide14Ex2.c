//declara��o de vari�veis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* Fa�a um programa que controla o consumo de energia dos
eletrodom�sticos de uma casa e:
 Crie e leia 5 eletrodom�sticos que cont�m nome (m�ximo 15 letras),
pot�ncia (real, em kW) e tempo ativo por dia (real, em horas).
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodom�stico (consumo/consumo total)
nesse per�odo de tempo. Apresente este �ltimo dado em porcentagem. */

typedef struct{
  char nome[16];
  float potencia;
  float tempoativo;
  int tempomes;
}Eletrodomestico;

int main(){
    //permite uso de acentos e �
    setlocale(LC_ALL, "portuguese");
    // lendo as variaveis.
    Eletrodomestico eletro[5];
    int i = 0;
    float consumo[5], consumototal = 0, consumorelativo[5];
    for(i = 0; i < 5 ; i++){
      // recebendo um nome de eletrodom�stico
      printf("Digite o nome do %i� eletrodom�stico (m�x. 15 caracteres): ", i+1);
      fgets(eletro[i].nome, 16, stdin);
      eletro[i].nome[strcspn(eletro[i].nome, "\n")]='\0';
      fflush(stdin);
      printf("Digite a pot�ncia do %i� eletrodom�stico: ", i+1);
      scanf("%f", &eletro[i].potencia);
      fflush(stdin);
      printf("Digite o tempo ativo, em horas, do %i� eletrodom�stico: ", i+1);
      scanf("%f", &eletro[i].tempoativo);
      fflush(stdin);
      printf("Digite quantos dias ele ficou ligado: ");
      scanf("%i", &eletro[i].tempomes);
      fflush(stdin);
      printf("\n");
      consumo[i] = eletro[i].potencia * eletro[i].tempoativo * eletro[i].tempomes;
      consumototal += consumo[i];
    }//for
    printf("\nO consumo total da casa �: %.2fkWh\n\n", consumototal);
    for(i = 0; i < 5; i++){
      consumorelativo[i] = (consumo[i] / consumototal) * 100;
      fflush(stdin);
      printf("O consumo relativo de %s foi de: %.2f%%\n\n", eletro[i].nome, consumorelativo[i]);
    }//for

return 0;
}//main
