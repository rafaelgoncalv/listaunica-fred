#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 20
// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor[TAM],i,maior,menor,posmenor,posmaior;
	
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
    posmenor = 0;
    maior = vetor[0];
    posmaior = 0;
    
    for(i=0;i<TAM;i++){
        if(vetor[i]<menor){

            menor = vetor[i];
            posmenor = i;
        }

        if(vetor[i]>maior){

            maior = vetor[i];
            posmaior = i;
        }
        
    }


	/* Saida de dados */

    printf("\nO menor valor é %d na posição %d",menor,posmenor);
    printf("\nO maior valor é %d na posição %d",maior,posmaior);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
