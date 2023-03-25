#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 5
#define maxcolunas 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas
e somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma
da linha correspondente na matriz A. Da mesma forma, em cada posição do
vetor somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[5][5];
    int i,j;
    int tam;
    tam = 5;
    int somalinhas[tam];
    int somacolunas[tam];
    int soma;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Lendo uma matriz

    for(i=0;i<maxlinhas;i++){

        for(j=0;j<maxcolunas;j++){

            printf("Matriza[%d][%d]:",i,j);
            scanf("%d",&matriza[i][j]);
        }
    }

    // Solicita que o usuário que entre com algum dado qualquer

    //Imprimindo a matriz

    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }

    //Somando as linhas

    for(i=0;i<maxlinhas;i++){

        soma = 0;

        for(j=0;j<maxcolunas;j++){

            soma += matriza[i][j]; //Somando as linhas
        }

        somalinhas[i] = soma;
    }

    //Somando as colunas

    for(j=0;j<maxlinhas;j++){

        soma = 0;

        for(i=0;i<maxcolunas;i++){

            soma += matriza[i][j]; //Somando as colunas
        }

        somacolunas[j] = soma;
    }

	/* Saida de dados */

    //Imprimindo o vetor com a soma de linha e outro de colunas

    printf("\nSoma das linhas:\n");
    for(i=0;i<tam;i++){

        printf("\tSomalinhas[%d] = %d",i,somalinhas[i]);
    }


    printf("\nSoma das colunas:\n");
    for(j=0;j<tam;j++){

        printf("\tSomacolunas[%d] = %d",j,somacolunas[j]);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 