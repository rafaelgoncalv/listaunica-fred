#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 5
#define maxcolunas 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Elabore um programa em C, para ler valores e armazená-los em uma matriz 5 x 5. Após o
programa deverá responder se a matriz é ou não uma matriz simétrica. Uma matriz
simétrica possui a mesma composição de valores abaixo e acima da diagonal principal.
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[maxlinhas][maxcolunas],i,j,verificador;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preenchendo a matriz
    printf("\nMatriz a:\n");
    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            printf("Matriza[%d][%d] = ",i,j);
            scanf("%d",&matriza[i][j]);
        }
    }

    // Solicita que o usuário que entre com algum dado qualquer

    //imprimindo a matriz em formato matricial

    for(i=0;i<maxlinhas;i++){

        printf("\n");
        for(j=0;j<maxcolunas;j++){

            printf("%8d",matriza[i][j]);
        }
        printf("\n");
    }

    //Verificando se matriz é ou não simétrica

    verificador = 1;
    for(i=0;i<maxlinhas && verificador==1;i++){
        for(j=0;j<maxcolunas;j++){

            if(matriza[i][j] == matriza[j][i]){

                verificador = 1; //É uma matriz simétrica

            }else{

                verificador = 0; //Não é uma matriz simétrica
            }
        }
    }

	/* Saida de dados */

    if(verificador == 1){

        printf("\nÉ uma matriz simétrica");

    }else{

        printf("\nNão é uma matriz simétrica");
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
