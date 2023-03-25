#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhasa 4
#define maxcolunasa 3
#define maxlinhasb 3
#define maxcolunasb 2


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes (4x3 e
3x2), calcule e imprima a matriz que representa o produto entre as duas matrizes lidas.
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int matriza[4][3],matrizb[3][2],i,j,z,resultado[4][2];

	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    
    //Preenchendo a primeira matriz
    printf("\nMatriz a:\n");
    for(i=0;i<maxlinhasa;i++){
        for(j=0;j<maxcolunasa;j++){

            printf("Matriza[%d][%d] = ",i,j);
            scanf("%d",&matriza[i][j]);
        }
    }
    
    //Preenchendo a segunda matriz
    printf("\nMatriz b:\n");
    for(i=0;i<maxlinhasb;i++){
        for(j=0;j<maxcolunasb;j++){

            printf("Matriza[%d][%d] = ",i,j);
            scanf("%d",&matrizb[i][j]);
        }
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */

    //Imprindo a matriz a
    printf("\nMatriz a:\n");
    for(i=0;i<maxlinhasa;i++){

        printf("\n");
        for(j=0;j<maxcolunasa;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }


    //Imprimindo a matriz b
    printf("\nMatriz b:\n");
    for(i=0;i<maxlinhasb;i++){

        printf("\n");
        for(j=0;j<maxcolunasb;j++){

            printf("%8d",matrizb[i][j]);
        }
        printf("\n");
    }

    //Realizando o produto da matriz a pela matriz b
    for(i=0;i<maxlinhasa;i++){

        for(j=0;j<maxcolunasb;j++){

            resultado[i][j] = 0;
            for(z=0;z<maxlinhasb;z++){

                resultado[i][j] = resultado[i][j] + (matriza[i][z]*matrizb[z][j]);
            }
        }
    }

	/* Saida de dados */

    printf("\nMatriz resultado:\n");
    for(i=0;i<maxlinhasa;i++){
        
        printf("\n");
        for(j=0;j<maxcolunasb;j++){

            printf("%8d",resultado[i][j]);

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
