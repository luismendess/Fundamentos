//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*11) Desenvolva um algoritmo que receba v�rios n�meros no intervalo fechado de 1 a 1000.
Ao receber um valor fora da faixa, o programa dever� exibir a soma dos n�meros pares e o produto dos n�meros �mpares e finalizar.
Obs: O valor fora da faixa utilizado para sair n�o dever� entrar na conta da soma nem do produto.*/


int main (){
  //setlocale que permite o uso de acentos e �
  setlocale(LC_ALL, "portuguese");
  //declara��o de vari�veis
  int valor = 1, soma = 0, produto = 1;
  //estrutura while que repete enquanto o valor estiver dentro do intervalo de 1 a 1000
  while (valor >= 1 && valor <= 1000) {
    printf("Insira um valor: ");
    scanf("%i", &valor);
    //estrutura condicional que verifica se � par ou �mpar
    if(valor % 2 == 0){
    //soma dos valores pares informados pelo usu�rio
    soma = (soma + valor);
    }else{
      //produto dos valores �mpares informados pelo usu�rio
      produto = produto * valor;
    }//else
  }//while
        //exibe o resultado da soma dos pares menos o valor final informado pelo usu�rio, que encerra o programa
        printf("A soma dos pares �: %i\n", soma-valor);
        //exibe o resultado do produto dos pares
        printf("O produto dos �mpares �: %i\n", produto);


return 0;
}//main
