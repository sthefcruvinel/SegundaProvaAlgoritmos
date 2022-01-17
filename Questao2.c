/* Avalia��o - Quest�o 2 - Autora: Stheffany Cruvinel Martins - Data: 06/11/2021
Um sistema de controle de uma estufa l� a temperatura da estufa a cada hora. Cada temperatura lida � armazenada em uma posi��o de um vetor,
que pode armazenar, no m�ximo, 24 temperaturas, uma para cada hora do dia. O vetor mantem exatamente os �ltimos 24 valores lidos para a temperatura, ou seja, a cada nova
leitura, o valor mais antigo do vetor � descartado. Crie um simulador deste sistema de monitoramento atrav�s de um programa que fa�a:

a) (2 pontos) inicialmente, uma leitura completa dos dados para o vetor (preencha completamente o vetor, como se se passassem 24 horas);
b) Em seguida, a cada nova leitura de temperatura, o valor mais antigo � descartado do vetor e o novo � inserido adequadamente. Para isso:
    i. (2 pontos)  inicie um la�o que s� terminar� quando um valor negativo seja informado para a temperatura. Nele ser� feita a leitura e posicionamento no vetor da nova temperatura;
    ii.(4 pontos) armazene corretamente os valores lidos nos respectivos vetores. Veja o esquema abaixo:
c) (2 pontos) ao sair do la�o, calcule e exiba a temperatura m�dia das �ltimas 12 horas medidas na estufa; */

#include <stdio.h>
#include <stdlib.h>
#define n 24

int main()
{
    //declara��o de vari�veis
    int vetor[n];
    int i, j;
    float media = 0;
    float soma = 0;
    int aux = 0;

    //entrada de dados
    for (i=0; i < n; i++)
    {
        printf ("Insira a temperatura as %i horas: ", i);
        scanf (" %i", &vetor[i]);
        if (vetor[i] < 0)
        {
            printf ("Insira a nova temperatura: ");
            scanf ("%i", &aux);
            vetor[i] = aux;
        }
        if (i > 11)
        soma = soma+vetor[i];
    }

    //exibe vetor
    for (i=0; i < n; i++)
    {
        printf ("[%i]", vetor[i]);
    }

    //muda posi��es temperatura
    for (i=0; i < n; i++)
    {
        vetor[i] = vetor[i+1];
        vetor[n] = aux;
    }

    //exibe vetor com nova temperatura
    printf ("\n\n");
    for (i=0; i < n; i++)
    {
        printf ("[%i]", vetor[i]);
    }

    //c�lculo e exibi��o de m�dia das temperaturas
    media = soma / 12;
    printf ("\nA temperatura media das ultimas 12 horas medidas na estufa eh: %.2f graus.", media);

    return 0;
}



