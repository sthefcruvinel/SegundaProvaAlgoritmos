/* Avalia��o - Quest�o 3 - Autora: Stheffany Cruvinel Martins - Data: 07/11/2021
Fa�a um programa que contenha os seguintes passos:
a) (2 pontos) � O programa dever� receber do usu�rio as quantidades de chuva lidas pelas esta��es pluviom�tricas e estas
quantidades dever�o ser armazenadas na matriz.
b) (4 pontos) � O programa dever� exibir ao usu�rio todas as regi�es do estado que se enquadram nas categorias 5, 6 ou 7.
c) (4 pontos) � O programa dever� retornar o maior �ndice pluviom�trico (quantidade de chuva) do estado, e sua regi�o */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara��o de vari�veis
    int matriz[6][9];
    int i, j;
    int maior = 0;
    int linhaMaior = 0;
    int colunaMaior = 0;

    //interface programa
    printf ("---------- PREVENCAOO DE CHUVAS NO RIO DE JANEIRO ---------- ");
    printf ("\n----------- LEITURA DAS ESTACOES PLUVIOMETRICAS ----------- \n");

    //la�o de inicializa��o para entrada de dados
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 9; j++)
        {
            printf("\nEntre com a quantidade de chuva na regiao (%i,%i): ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    //classifica a categoria 5
    printf ("\nRegioes na categoria 5: ");
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if (matriz[i][j] >= 61 && matriz[i][j] <= 75)
                printf ("\n (%i, %i) \n", i+1, j+1);
        }
    }

    //classifica a categoria 6
    printf ("\nRegioes na categoria 6: ");
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if (matriz[i][j] >= 76 && matriz[i][j] <= 90)
                printf ("\n (%i, %i) \n", i+1, j+1);
        }
    }

    //classifica a categoria 7
    printf ("\nRegioes na categoria 7: ");
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if (matriz[i][j] > 90)
                printf ("\n (%i, %i) \n", i+1, j+1);
        }
    }

    //c�lculo maior �ndice pluviom�trico
    for (i = 0; i < 6; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if(matriz[i][j] > maior)
            {
            maior = matriz[i][j];
            linhaMaior = i+1;
            colunaMaior = j+1;
            }
        }
    }

    //sa�da de dados
    printf ("\nO maior indice pluviometrico foi de %imm, na regiao (%i, %i)", maior, linhaMaior, colunaMaior);

    return 0;
}

