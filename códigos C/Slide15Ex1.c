//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//cria uma lista enumerada de meses, vai de 0 a 11
enum Mes {JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};
//fun��o principal
int main(){
    //permite o uso de acentos e �
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�vel
    int mes;
    //pede para inserir o m�s
    printf("Digite um n�mero para exibir um m�s: ");
    scanf("%i", &mes);
    /*compara o valor rearranjado com a posi��o do m�s que o usu�rio quer
    exibindo qual foi o m�s e quantos dias ele tem*/
    if(mes == JANEIRO){
      printf("\nO m�s � Janeiro e tem 31 dias\n\n");
    }else if(mes == FEVEREIRO){
      printf("\nO m�s � Fevereiro e tem 28 dias\n\n");
    }else if(mes == MARCO){
      printf("\nO m�s � Mar�o e tem 31 dias\n\n");
    }else if(mes == ABRIL){
      printf("\nO m�s � Abril e tem 30 dias\n\n");
    }else if(mes == MAIO){
      printf("\nO m�s � Maio e tem 31 dias\n\n");
    }else if(mes == JUNHO){
      printf("\nO m�s � Junho e tem 30 dias\n\n");
    }else if(mes == JULHO){
      printf("\nO m�s � Julho e tem 31 dias\n\n");
    }else if(mes == AGOSTO){
      printf("\nO m�s � Agosto e tem 31 dias\n\n");
    }else if(mes == SETEMBRO){
      printf("\nO m�s � Setembro e tem 30 dias\n\n");
    }else if(mes == OUTUBRO){
      printf("\nO m�s � Outubro e tem 31 dias\n\n");
    }else if(mes == NOVEMBRO){
      printf("\nO m�s � Novembro e tem 30 dias\n\n");
    }else if(mes == DEZEMBRO){
      printf("\nO m�s � Dezembro e tem 31 dias\n\n");
    }else{
      printf("\nM�s inexistente!!\n\n");
    }//else

return 0;
}//
