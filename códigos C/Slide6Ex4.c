//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
        setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
        float imposto, salario, aliquota, parceladeducao;
    //inser��o de valor para executar o comando
        printf("Por favor, insira o sal�rio do empregado: ");
        scanf("%f", &salario);

        //condicional para verificar se o sal�rio � maior que 4664.68
        if(salario >= 4664.68){
          //se o c�digo entrar nesse if, esses ser�o os valores da al�quota e da parcela de dedu��o
          aliquota = 27.5/100;
          parceladeducao = 869.36;
          //c�lculo do imposto referente ao sal�rio do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse sal�rio �: %.2f\n", imposto);
        }else if(salario >= 3751.06){ //condicional para verificar se o sal�rio � maior que 3751.06
          //se o c�digo entrar nesse if, esses ser�o os valores da al�quota e da parcela de dedu��o
          aliquota = 22.5/100;
          parceladeducao = 636.13;
          //c�lculo do imposto referente ao sal�rio do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse sal�rio �: %.2f\n", imposto);
        }else if(salario >= 2826.66){ //condicional para verificar se o sal�rio � maior que 2826.66
          //se o c�digo entrar nesse if, esses ser�o os valores da al�quota e da parcela de dedu��o
          aliquota = 15/100;
          parceladeducao = 354.80;
          //c�lculo do imposto referente ao sal�rio do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse sal�rio �: %.2f\n", imposto);
        }else if(salario >= 1903.99){ //condicional para verificar se o sal�rio � maior que 1903.99
          //se o c�digo entrar nesse if, esses ser�o os valores da al�quota e da parcela de dedu��o
          aliquota = 7.5/100;
          parceladeducao = 142.80;
          //c�lculo do imposto referente ao sal�rio do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse sal�rio �: %.2f\n", imposto);
        }else{
          printf("\nO empregado este isento de imposto.\n\n");
        }

return 0;
}
