#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na 
posição (um por linha).

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i;
    //Inicialzando a variável
    i = 0;
	
	/* Fim */


	/* Entrada de dados */
	
	setlocale(LC_ALL,"");

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */

    while(i<=19){

        printf("\nNa posição %d = %d",i,vetor[i]);

        i++;
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 