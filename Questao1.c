/* Avaliação - Questão 1 - Autora: Stheffany Cruvinel Martins - Data: 05/11/2021
Faça um programa em C  para calcular o desvio-padrão de um conjunto de valores. Este programa deve:

a)(1 ponto) - Solicitar ao usuário quantos números deseja informar (máximo de 100) e armazená-lo
b)(3 pontos) - Solicitar ao usuário informar os N números e armazená-los
c)(6 pontos) - Calcular e exibir o desvio-padrão para o conjunto de números informados. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 100

int main()
{
    float vetor[n];
    int i;
    int numero = 0;
    float desvio = 0;
    float media = 0;
    float cont = 0;
    float variancia = 0;
    float k = 0;

    //interface do programa
    printf ("---------- CALCULO DE DESVIO-PADRAO ----------\n");
    printf ("----------------------------------------------\n");

    //validação e entrada de dados
    do
    {
        printf ("Quantos numeros voce deseja informar? ");
        scanf (" %i", &numero);

        if (numero > n)
        {
            printf ("Entrada invalida! Insira um numero menor ou igual a 100.\n");
        }
    }
    while (numero > n);

    //laço para inicializar o vetor
    for (i=0; i < numero; i++)
    {
        printf ("Entre com o %io valor: ", i+1);
        scanf (" %f", &vetor[i]);
        cont = cont + vetor[i];
    }

    //cálculo da média p/ definir o desvio
    media = cont / numero;
    printf ("\nA media aritmetica dos valores informados eh: %.2f", media);

    //cálculo desvio-padrão
    for (i = 0; i < numero; i++)
    {
        k = vetor[i] - media;
        variancia = variancia + k * k;
    }
    desvio = sqrt(variancia / numero);

    //saída de dados
    printf ("\nO desvio-padrao dos valores informados eh: %.4f", desvio);

    return 0;
}






