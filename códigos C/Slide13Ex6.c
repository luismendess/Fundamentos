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
    char nome[10][10], sobrenome[10][10];
    int l = 0;
    //pede a inser��o de nome e sobrenome
    printf("Insira um nome: ");
    fgets(nome[l], 20, stdin);
    nome[l][strcspn(nome[l], "\n")] = '\0';
    printf("Insira um sobrenome: ");
    fgets(sobrenome[l], 20, stdin);
    sobrenome[l][strcspn(sobrenome[l], "\n")] = '\0';
    //adiciona numa string o sobrenome e a v�rgula
    strcat (sobrenome[l], ", ");
    //adiciona numa string o sobrenome com a v�rgula e o nome
    strcat (sobrenome[l], nome[l]);
    printf("Nome em formato americano: %s\n\n", sobrenome[l]);

return 0;
}//main
