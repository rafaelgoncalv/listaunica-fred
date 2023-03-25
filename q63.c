#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia dois vetores de números reais de mesma dimensão (10 
posições), e imprima o vetor resultante da soma destes vetores.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor1[10];
    int vetor2[10];
    int resultante[10];
    int i;
    //Inicializando a variável

    i = 0;

	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    while(i<=9){

        printf("Digite o valor vetor1[%d]:",i);
        scanf("%d",&vetor1[i]);
        printf("Digite o valor vetor2[%d]:",i);
        scanf("%d",&vetor2[i]);

        resultante[i] = vetor1[i] + vetor2[i];

        i++;
    }

	/* Saida de dados */

    i = 0;

    while(i<=9){

        printf("\nResultante[%d] = %d",i,resultante[i]);

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