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
    printf(" Informe a opera��o com os valores: ");
    //scanf recebendo mais de um valor;
    scanf("%f%c%f", &valor1, &opcao, &valor2);
    //come�o da execu��o do switch
    switch (opcao) {
      case '+':
                //execu��o do case soma
                resultado = valor1 + valor2;

                printf("O resultado �: %.2f\n\n", resultado);

                break;
      case '-':
                //execu��o do case subtra��o
                resultado = valor1 - valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      case '*':
                //execu��o do case multiplica��o
                resultado = valor1 * valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      case '/':
                //execu��o do case divis�o
                resultado = valor1 / valor2;

                printf("O resultado �: %.2f\n\n", resultado);
                break;
      default:
                //execu��o caso o usu�rio informe valoroes diferentes dos pedidos
                printf("Op��o indefinida pelo sistema.\n\n");
                break;
    }//fim do switch

return 0;
}
