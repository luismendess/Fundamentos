//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    float nota;
    //inser��o de valor para executar o comando
    printf("Por favor, informe a nota do aluno: ");
    scanf("%f", &nota);
    //condicional para verificar se � uma nota v�lida
    if (nota>10 || nota<0){
        printf("Essa nota n�o existe...\n\n");
    }else{
        //condicional para verificar se a nota � maior ou igual a 6
        if(nota >= 6){
        printf("O aluno foi aprovado!! \n:)\n\n");
    }else {
        printf("O aluno foi reprovado! \n:c\n\n");
    }
    }
    return 0;
}
