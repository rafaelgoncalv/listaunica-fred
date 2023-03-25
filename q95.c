#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 6
#define maxcolunas 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6
por 6, colocando os valores contidos nela em um vetor de 36 elementos e mostrar o
conteúdo do vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[6][6],i,j,indicie;
    int vetor[36];
    //Inicializando a variável
    indicie = 0;
	
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

    printf("\n Matriz:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }

    //Transformando a matriz em um vetor;

    for(i=0;i<maxlinhas;i++){

        for(j=0;j<maxcolunas;j++){

            vetor[indicie] = matriza[i][j];

            indicie++;

        }

    }

	/* Fim */ 


	/* Saida de dados */

    //Imprimindo o vetor

    printf("\nVetor:\n");
    for(i=0;i<indicie;i++){

        printf("%d ",vetor[i]);
    }


	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
