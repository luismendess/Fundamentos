//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//fun��o de limpeza de buffer
void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

//fun��o principal
int main(){
    //permite uso de acentos e �
    setlocale (LC_ALL, "portuguese");
    //declara��o de vari�veis
    int l = 0, posicao;
    long long int telefones[5];
    char nomes[5][11];
    //repete 5 vezes para inser��o de todos os valores
    for(l = 0; l < 5; l++){
      printf("Digite o %i� nome: ", l+1);
      fgets(nomes[l], 5, stdin);
      nomes[l][strcspn(nomes[l], "\n")] = '\0';
      limpar_buffer();
      printf("Digite o telefone de %s: ", nomes[l]);
      scanf("%lli", &telefones[l]);
      limpar_buffer();
      //verifica se algum n�mero informado � menor que 0 para encerrar o programa
      if(telefones[l] < 0){
        return 0;
      }//if
    }//for
    printf("Indique a posi��o que quer verificar: ");
    scanf("%i", &posicao);
    //verifica se a posi��o est� no intervalo de valores inseridos anteriormente
    if(posicao >= 1 && posicao <=5){
      //tira 1 do valor para exibir a posi��o certa
      posicao = posicao - 1;
      printf("O telefone de %s �: %lli\n\n", nomes[posicao], telefones[posicao]);
    }else{
      printf("Linha inexistente!\n");
    }//else

return 0;
}//main
