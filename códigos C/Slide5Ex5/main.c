#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    double valor, raiz;

    printf("Por favor, informe o valor para achar a ra�z quadrada: ");
    scanf("%lf", &valor);

    raiz = sqrt(valor);

    printf("\nA ra�z quadrada desse valor �: %.2lf.\n\n", raiz);
    return 0;
}
