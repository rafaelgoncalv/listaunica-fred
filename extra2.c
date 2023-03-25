#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 5
#define maxcolunas 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Crie um matriz identidade de ordem n x n em c

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriza[maxlinhas][maxcolunas],i,j;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

	// Solicita que o usuário que entre com algum dado qualquer

    for(i=0;i<maxlinhas;i++){

        for(j=0;j<maxcolunas;j++){

            if(i==j){

                matriza[i][j] = 1;

            }else{
                
                matriza[i][j] = 0;
            }


        } 
    }

	/* Fim */ 

	/* Saida de dados */


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
