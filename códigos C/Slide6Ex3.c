//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    //setlocale para poder inserir acentos e � durante o c�digo
        setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
        float a, b, c, delta, x1, x2;
    //inser��o dos valores para executar o comando
        printf("Por favor, insira um valor para A: ");
        scanf("%f", &a);
        printf("Por favor, insira um valor para B: ");
        scanf("%f", &b);
        printf("Por favor, insira um valor para C: ");
        scanf("%f", &c);
    //c�lculo para determinar o delta e depois achar as ra�zes
        delta = pow(b, 2) - 4 * a * c;
    // condicional para verificar se delta n�o � negativo e a � diferente de 0, para fazer o c�digo ser finalizado
        if(delta >= 0 && a != 0){
          x1 = (-b+(sqrt(delta))) / (2 * a);
          x2 = (-b-(sqrt(delta))) / (2 * a);
          printf("\nO valor das duas ra�zes s�o: %.2f e %.2f\n\n", x1, x2);
        }else{
          printf("\n� imposs�vel realizar esse c�lculo!\n\n");
        }

return 0;
}
