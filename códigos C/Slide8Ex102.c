//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int alunos = 1;
    float nota1, nota2, media;
    //estrutura while para repetir enquanto alunos for menor que 5
    while (alunos <= 5) {
      printf("insira a primeira nota do %i aluno: ", alunos);
      scanf("%f", &nota1);
      printf("insira a segunda nota do %i aluno: ", alunos);
      scanf("%f", &nota2);
      //condicional para exibir uma mensagem de erro quando a nota for fora do intervalo de 0 a 10
      printf("\nErro! Fa