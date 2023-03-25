//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int opcao, valor, idade;
    //menu para pedir o valor referente ao case que ser� usado
    printf("    Menu do programa: \n");
    printf(" 1 - Verificar Par/�mpar\n");
    printf(" 2 - Verificar maior/menor de idade\n");
    printf("Informe um valor: ");
    scanf("%i", &opcao);
    //come�o da execu��o do switch
    switch (opcao) {
      case 1:
                //execu��o do case 1
                printf("\nInforme um valor para verificar se � par/�mpar: ");
                scanf("%i", &valor);
                if(valor%2 == 0){
                  printf("O valor � par\n\n");
                }else{
                  printf("O valor � �mpar\n\n");
                }
                break;
      case 2:
                //execu��o do case 2
                printf("\nInforme sua idade: ");
                scanf("%i", &idade);
                if(idade >= 18){
                  printf("Voc� � maior de idade\n\n");
                }else{
                  printf("Voc� � menor de idade\n\n");
                }
                break;
      default:
                //execu��o caso o usu�rio informe um valor diferente de 1 ou 2
                printf("O valor informado n�o tem uma op��o.\n\n");
                break;
    }//fim do switch

return 0;
}
