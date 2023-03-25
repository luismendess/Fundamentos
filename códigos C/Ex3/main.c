#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "portuguese");//adiciona acentos e � na exibi��o

    //var�aveis
    int hora, minuto, segundo, restante;

    printf("Informe a hora atual, falando as horas, minutos e segundos: ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    //c�lculo de horas restantes, a partir da hora atual
    restante = 86400 /*horas de um dia inteiro*/- (hora*3600 + minuto*60 + segundo);//1 hora tem 3600 segundos, 1 minuto tem 60 segundos

    //resultado exibido
    printf("Faltam %i segundos para acabar o dia.\n\n", restante);

    return 0;
}
