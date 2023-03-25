#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 5
#define maxcolunas 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir
o programa deverá calcular a soma dos valores que compõem a diagonal principal e a
diagonal secundária da matriz.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[maxlinhas][maxcolunas],i,j,somadp,somads;
    //Inicializando a variável

    somadp = 0;
    somads = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Lendo a matriz
    for(i=0;i<maxlinhas;i++){

        for(j=0;j<maxcolunas;j++){

            printf("Matriz[%d][%d] = ",i,j);
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

    //Somando a diagonal principal

    for(i=0;i<maxlinhas;i++){

        for(j=0;j<maxcolunas;j++){

            if(i==j){

                somadp = somadp + matriza[i][j];
            }

        }

    }

    //Somando a diagonal secundária

    for(i=0;i<maxlinhas;i++){

        somads = somads + matriza[i][maxlinhas - 1 - i];

    }

	/* Fim */ 


	/* Saida de dados */

    printf("\nA soma da diagonal principal é %d",somadp);
    printf("\nA soma da diagonal secundária é %d",somads);
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
