(Questão 1 - IFTM) - O desvio-padrão de uma lista de números é a medida de quanto os números se desviam da média. Se o desvio-padrão é pequeno, os números estão aglomerados junto à média. Se o desvio-padrão é grande, os números estão dispersos em relação à média. O desvio-padrão, S, de uma lista de N números é definido da seguinte forma:

(Fórmula do desvio padrão)

Faça um programa em C  para calcular o desvio-padrão de um conjunto de valores. Este programa deve:

a) Solicitar ao usuário quantos números deseja informar (máximo de 100) e armazená-lo

b) Solicitar ao usuário informar os N números e armazená-los

c) Calcular e exibir o desvio-padrão para o conjunto de números informados.

##

(Questão 2 - IFTM) - Um sistema de controle de uma estufa lê a temperatura da estufa a cada hora. Cada temperatura lida é armazenada em uma posição de um vetor, que pode armazenar, no máximo, 24 temperaturas, uma para cada hora do dia.  O vetor mantem exatamente os últimos 24 valores lidos para a temperatura, ou seja, a cada nova leitura, o valor mais antigo do vetor é descartado.

Crie um simulador deste sistema de monitoramento através de um programa que faça:

a) Inicialmente, uma leitura completa dos dados para o vetor (preencha completamente o vetor, como se se passassem 24 horas);

b) Em seguida, a cada nova leitura de temperatura, o valor mais antigo é descartado do vetor e o novo é inserido adequadamente. Para isso:

    i. Inicie um laço que só terminará quando um valor negativo seja informado para a temperatura. Nele será feita a leitura e posicionamento no vetor da nova temperatura;

    ii. Armazene corretamente os valores lidos nos respectivos vetores.

##

(Questão 3 - IFTM) - No mês de janeiro de 2011 a chuva castigou a região serrana do Rio de Janeiro e causou a morte de aproximadamente 1000 pessoas. O INPE (Instituto Nacional de Pesquisas Espaciais) vem estudando maneiras de diminuir catástrofes como esta, por meio de detecção de chuvas fortes antes que aconteçam, e você foi convidado para ajudar no sistema de prevenção de tragédias causadas pelas chuvas.

O estado do Rio de Janeiro foi mapeado em uma matriz 6 x 9, e cada célula da matriz possui estações pluviométricas que informam a quantidade de chuva estimada para acontecer no período de 1 hora.
A quantidade de chuva é medida pelo índice pluviométrico (medido em milímetros) e pode ser dividido em categorias:


Categoria       Quantidade de Chuva (mm)

1 -                0 a 15, 
2 -                16 a 30, 
3 -                31 a 45, 
4 -                46 a 60, 
5 -                61 a 75, 
6 -                76 a 90, 
7 -                Mais de 90.

Faça um programa que contenha os seguintes passos:
a) O programa deverá receber do usuário as quantidades de chuva lidas pelas estações pluviométricas e estas quantidades deverão ser armazenadas na matriz.
b) O programa deverá exibir ao usuário todas as regiões do estado que se enquadram nas categorias 5, 6 ou 7.
c) O programa deverá retornar o maior índice pluviométrico (quantidade de chuva) do estado, e sua região.


