#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    float totalvendido, comissao, salariobruto, salariobase = 1200;

    printf("Por favor, informe o total vendido pelo funcion�rio em reais: ");
    scanf("%f",&totalvendido);

    comissao = totalvendido * 0.1;

    printf("\nO funcion�rio recebeu R$%.2f de comiss�o.\n", comissao);

    salariobruto = comissao + salariobase;

    printf("\nO sal�rio bruto do funcion�rio foi de R$%.2f.\n\n", salariobruto);
    return 0;
}
