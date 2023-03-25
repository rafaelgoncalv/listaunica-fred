#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 3
#define maxcolunas 4

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[3][4],matrizb[3][4],i,j,soma,diferenca,matrizc[3][4],matrizd[3][4];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preenchendo a primeira matriz
    printf("\nMatriz a:\n");
    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            printf("Matriza[%d][%d] = ",i,j);
            scanf("%d",&matriza[i][j]);
        }
    }

    //Preenchendo a segunda matriz
    printf("\nMatriz b:\n");
    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            printf("Matriza[%d][%d] = ",i,j);
            scanf("%d",&matrizb[i][j]);
        }
    }
    // Solicita que o usuário que entre com algum dado qualquer

    //Imprimindo a primeira matriz

    printf("\n Matriz a:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }

    //Imprimindo a segunda matriz

    printf("\n Matriz b:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matrizb[i][j]);
        }
        printf("\n");
    }

    //Somando a matriz a com a matriz b e adicionando o resultado em uma terceira matriz 

    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            soma = matriza[i][j] + matrizb[i][j];
            matrizc[i][j] = soma;
        }

    }

    //Subtraindo a matriz a pela a matriz b e adicionando o resultado em quarta matriz 

    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            diferenca = matriza[i][j] - matrizb[i][j];
            matrizd[i][j] = diferenca;
        }

    }

	/* Saida de dados */

    //Imprimindo a matriz soma

    printf("\n Matriz c:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matrizc[i][j]);
        }
        printf("\n");
    }

    //Imprimindo a matriz diferença


    printf("\n Matriz d:\n");
    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matrizd[i][j]);
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
