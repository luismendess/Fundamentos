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
    char frase[100][1];
    int a = 0, e = 0, i = 0, o = 0, u = 0, l = 0, c = 0;
    
    printf("Insira a frase:\n");
    fgets(frase[l], 100, stdin);
    frase[l][strcspn(frase[l], "\n")] = '\0';
    limpar_buffer();
    //monta a string da frase
    for (l = 0; l < 1; l++){
      //verifica cada coluna, ou, no caso, caracter, para ver se � vogal
      for (c = 0; c < strlen(frase[l]); c++){
        //verifica se � A, caso for, adiciona 1 no contador A
        if((frase[l][c] == 'a') || (frase[l][c] == 'A')){
            a++;
        }//if
        //verifica se � E, caso for, adiciona 1 no contador E
        if((frase[l][c] == 'e') || (frase[l][c] == 'E')){
            e++;
        }//if
        //verifica se � I, caso for, adiciona 1 no contador I
        if((frase[l][c] == 'i') || (frase[l][c] == 'I')){
            i++;
        }//if
        //verifica se � O, caso for, adiciona 1 no contador O
        if((frase[l][c] == 'o') || (frase[l][c] == 'O')){
            o++;
        }//if
        //verifica se � U, caso for, adiciona 1 no contador U
        if((frase[l][c] == 'u') || (frase[l][c] == 'U')){
            u++;
        }//if
      }//for
    }//for
    printf("A frase tem %i A's, %i E's, %i I's, %i O's, %i Us\n\n", a, e, i, o, u);

return 0;
}//main
