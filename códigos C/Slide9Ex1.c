//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int alunos = 1;
    float nota1, nota2, media;
    //estrutura do, que garante que o c�digo funcione pelo menos 1 vez
    do{
        printf("Insira a primeira nota do %i� aluno: ", alunos);
        scanf("%f", &nota1);
        printf("Insira a segunda nota do %i� aluno: ", alunos);
        scanf("%f", &nota2);
        //condicional para exibir uma mensagem de erro quando a nota for fora do intervalo de 0 a 10
        if (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0){
          //Exibe a mensagem de erro
          printf("\nErro! Fa�a uma nova digita��o...\n");
        }else{
          media = (nota1 + nota2)/2;
          printf("\nA m�dia do aluno %i� � %.2f\n\n",alunos, media);
          //Incrementa o valor da vari�vel
          alunos++;
        }
    }while (alunos <=5);//condicional de repeti��o da estrutura do
return 0;
}
