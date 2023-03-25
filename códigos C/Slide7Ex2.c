//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    char opcao;
    float resultado, valor1, valor2;
    //menu para pedir o valor referente ao case que ser� usado
    printf(" Menu do programa: \n");
    printf(" + - Soma\n");
    printf(" - - Subtra��o\n");
    printf(" * - Multiplica��o\n");
    printf(" / - divis�o\n");
    printf(" Informe a opera��o: ");
    scanf("%c", &opcao);
    //come�o da execu��o do switch
    switch (opcao) {
      case '+':
                //execu��o do case soma
                printf("\nInforme um valor para somar: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para somar: ");
                scanf("%f", &valor2);

                resultado = valor1 + valor2;

                printf("O resultado �: %.2f\n\n", resultado);

                break;
      case '-':
                //execu��o do case subtra��o
                printf("\nInforme um valor para subtrair: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para subtrair: ");
                scanf("%f", &valor2);

                resultado = valor1 - valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      case '*':
                //execu��o do case multiplica��o
                printf("\nInforme um valor para multiplicar: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para multiplicar: ");
                scanf("%f", &valor2);

                resultado = valor1 * valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      case '/':
                //execu��o do case divis�o
                printf("\nInforme um valor para dividir: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para dividir: ");
                scanf("%f", &valor2);

                resultado = valor1 / valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      default:
                //execu��o caso o usu�rio informe um valor diferente dos pedidos
                printf("Op��o indefinida pelo sistema.\n\n");
                break;
    }//fim do switch

return 0;
}
