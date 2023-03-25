#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 20
// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor[TAM],i,maior,menor;
	
	/* Fim */

	/* Entrada de dados */

    setlocale(LC_ALL,"Portuguese");

    //Prechendo o vetor de i posições
    for(i=0;i<TAM;i++){

        printf("Digite o %dª valor:",i+1);
        scanf("%d",&vetor[i]);
    }

    // Solicita que o usuário que entre com algum dado qualquer

    //Percorrendo o vetor para encontrar o maior e o menor valor
    
    menor = vetor[0];
    maior = vetor[0];

    for(i=0;i<TAM;i++){

        if(vetor[i]<menor){

            menor = vetor[i];
        }

        if(vetor[i]>maior){

            maior = vetor[i];
        }
        
    }


	/* Saida de dados */

    printf("\nO menor valor é %d",menor);
    printf("\nO maior valor é %d",maior);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
