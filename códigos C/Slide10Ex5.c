//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale usado para poder usar o � e acentos
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int fatorial, valor;

    printf("Insira um valor calcular o fatorial: ");
    scanf("%i", &valor);
    //estrutura for para repetir o c�lculo do fatorial
    for(fatorial = 1; valor > 1; valor = valor - 1){
    fatorial = fatorial * valor;
    }
    printf("O fatorial do valor digitado �: %i\n\n", fatorial);

return 0;
}
