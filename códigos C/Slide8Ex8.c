//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int opcao;
    //estrutura while com condi��o de repetir enquanto a op��o for diferente de 3
    while(opcao != 3){
      printf("Menu do Programa:\n");
      printf("1 - Teste 1\n");
      printf("3 - Teste 2\n");
      printf("Finalizar Programa\n");
      printf("Digite sua op��o:");
      scanf("%i", &opcao);
      //condicional para quando a op��o for igual a 1
      if(opcao == 1){
        printf("\nTeste 1\n\n");
      //condicional para quando a op��o for igual a 2
      }else if (opcao == 2){
        printf("\nTeste 2\n\n");
      //condicional para quando a op��o for diferente de 3
      }else if(opcao != 3){
        printf("\nErro!\n\n");
      }
    }
    printf("\nPrograma finalizado\n\n" );

return 0;
}
