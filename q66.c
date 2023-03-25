#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
um segundo vetor e imprima este último

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor1[10]={1,2,3,4,5,6,7,8,9,10};
    int vetor2[10],i;
	
	/* Fim */

	/* Entrada de dados */

    for(i=0;i<10;i++){

        vetor2[i] = vetor1[i];
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    for(i=0;i<10;i++){

        printf("\nVetor[%d] = %d",i,vetor2[i]);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 