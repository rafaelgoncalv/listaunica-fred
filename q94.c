#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 5
#define maxcolunas 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo
valor lido e colocar o resultado na própria matriz.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[5][5],i,j,num,produto;
	
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

    //Lendo o valor que deseja multiplicar pelos elementos da matriz

    printf("Digite um valor = ");
    scanf("%d",&num);


	// Solicita que o usuário que entre com algum dado qualquer

    //Imprimindo a matriz

    printf("\n Matriz antes do produto:\n");
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

            produto = num*matriza[i][j];

            matriza[i][j] = produto;

        }

    }

	/* Fim */ 


	/* Saida de dados */

    //Imprimindo a matriz

    printf("\n Matriz após o produto:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
