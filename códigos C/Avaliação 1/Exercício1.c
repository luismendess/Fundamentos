//implementa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicia��o da fun��o main
int main (){
  //setlocale, que permite a utiliza��o de acentos e � no c�digo
  setlocale (LC_ALL, "portuguese");
  //declara��o de vari�veis
  float preco;
  int quantidade;
  char opcao, caracter;
  //menu para pedir que o usu�rio insira a op��o desejada
  printf(" ------------------------------------\n");
  printf("|          Menu do programa:         |\n");
  printf("| A - Pre�o da Ma��                  |\n");
  printf("| B - Verificar Vogal                |\n");
  printf(" ------------------------------------\n");
  printf("Informe a op��o desejada: ");
  scanf("%c", &opcao);
  //inicia��o da fun��o switch
  switch (opcao) {

    case 'A'://m�todo usado para permitir que o usu�rio use a letra mai�scula e min�scula
      case 'a':
          //pede ao usu�rio que insira a quantidade de ma��s
          printf("\nInforme quantas ma��s deseja comprar: ");
          scanf("%i", &quantidade);
          //verifica se a quantidade foi menor ou igual a 0
          if (quantidade <= 0) {
            //caso entre nessa condi��o, exibe mensagem de erro
            printf("\nSinto muito, mas n�o h� como calcular o pre�o. . .\n\n");
          }else{
          //verifica se a quantidade foi maior ou igual a 50
          if(quantidade >= 50){
            //caso entre nessa condi��o, o pre�o das ma��s � calculado para R$0,50 cada
            preco = quantidade * 0.5;
            printf("\nO pre�o a ser pago das ma��s �: R$%.2f\n\n", preco);
          //verifica se a quantidade foi maior ou igual a 25 e est� abaixo de 50
          }else if(quantidade >= 25){
            //caso entre nessa condi��o, o pre�o das ma��s � calculado para R$0,60 cada
            preco = quantidade * 0.6;
            printf("\nO pre�o a ser pago das ma��s �: R$%.2f\n\n", preco);
          //verifica se a quantidade foi maior ou igual a 10 e est� abaixo de 25
          }else if(quantidade >= 10){
            //caso entre nessa condi��o, o pre�o das ma��s � calculado para R$0,80 cada
            preco = quantidade * 0.8;
            printf("\nO pre�o a ser pago das ma��s �: R$%.2f\n\n", preco);
          //verifica se a quantidade foi menor que 10
          }else if(quantidade < 10){
            //caso entre nessa condi��o, o pre�o das ma��s � igual � quantidade
            preco = quantidade;
            printf("\nO pre�o a ser pago das ma��s �: R$%.2f\n\n", preco);
          }//else if
          }//else
          break; //encerra o case A/a
      case 'B'://m�todo usado para permitir que o usu�rio use a letra mai�scula e min�scula
        case 'b':
          //limpa o buffer do teclado, para poder pedir outra inser��o
          setbuf(stdin, NULL);
          //pede ao usu�rio que informe uma letra
          printf("\nInforme um caracter: ");
          scanf("%c", &caracter);
          //verifica se o caracter � igual a alguma vari�vel
          if (caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' || caracter == 'u' || caracter == 'U'){
            //se entrar nessa condi��o, exibe a mensagem de que � uma vogal
            printf("\nVoc� digitou uma vogal!!\n\n");
          }else{
            //se entrar no else, exibe a mensagem de que n�o � uma vogal
            printf("\nO que digitou n�o � uma vogal\n\n");
          }//else
          break; //encerra o case B/b
      //usado para exibir uma mensagem de erro, caso n�o tenha sido inserido uma op��o v�lida
      default:
          printf("Op��o inv�lida!!\n\n");
          break; //encerra o default
  }//switch
return 0;
}//main
