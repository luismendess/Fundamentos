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
    char nome[20][1];
    long int tamanho;
    int l = 0;
    //verifica se o nome � menor que 5 para repetir caso seja
    do{
    //monta a string de tamanho m�ximo 20
    for(l = 0; l < 20; l++){
      printf("Digite o nome: ");
      fgets(nome[l], 20, stdin);
      nome[l][strcspn(nome[l], "\n")] = '\0';
      tamanho = strlen(nome[l]);
      //verifica se o tamanho � maior ou igual a 5 e, se for, exibe o nome e encerra o programa
      if(tamanho >= 5){
        printf("\nO nome �: %s\n\n", nome[l]);
        break;
      }//if
    }//for
    }while(tamanho < 5);

return 0;
}//main
