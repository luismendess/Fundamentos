//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
        setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
        int numero;
    //inser��o de valor para executar o comando
        printf("Por favor, insira um valor para avaliar se � par ou �mpar: ");
        scanf("%i", &numero);
    //condicional com o % para calcular o resto da divis�o
        if(numero%2 == 0){
          printf("\nO n�mero � par\n\n");
        }else{
          printf("\nO n�mero � �mpar\n\n");
        }

return 0;
}
