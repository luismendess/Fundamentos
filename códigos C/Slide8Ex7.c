//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
    setlocale(LC_ALL,"portuguese");
    //declara��o de vari�veis
    int valor, contador = 2, fatorial = 1;
    //estrutura while com condi��o de repetir enquanto menor ou igual a 322
    printf("Informe um valor inteiro e maior que 0: ");
    scanf("%i", &valor);
    //estrutura while com condi��o de repetir enquanto o valor for maior ou igual ao contador
    while(contador <= valor){
      fatorial = fatorial * contador;
      contador++;
    }
    printf("O valor de %i! �: %i\n\n", valor, fatorial);


return 0;
}
