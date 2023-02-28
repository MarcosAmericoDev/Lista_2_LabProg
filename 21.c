#include <stdio.h>

/* Um palíndromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos  ́e um palíndromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se
ele  ́e ou n ̃ao um palíndromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
seus dígitos individuais.] */

int main() {
    int numero, DezenaDeMilhar, Milhar, Centena, Dezena, Unidade;
    int RestoDezenaDeMilhar, RestoMilhar, RestoCentena, ValorInvertido;

    printf("Digite o valor que deseja checar: ");
    scanf("%d", &numero);

    DezenaDeMilhar = numero / 10000;
    RestoDezenaDeMilhar = numero % 10000;
    Milhar = RestoDezenaDeMilhar / 1000;
    RestoMilhar = RestoDezenaDeMilhar % 1000;
    Centena = RestoMilhar / 100;
    RestoCentena = RestoMilhar % 100;
    Dezena = RestoCentena / 10;
    Unidade = RestoCentena % 10;

    ValorInvertido = Unidade * 10000 + Dezena * 1000 + Centena * 100 + Milhar * 10 + DezenaDeMilhar;

    if (ValorInvertido == numero) 
    {
    printf("Esse número é um palíndromo!");
    }
    else
    {
        printf("Esse número não é um palíndromo!");
    }

    return 0;
}