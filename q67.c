#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor1[10],vetor2[10],vetor3[2],i,maior1,maior2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preechendo o vetor1
    printf("\nVetor 1:\n");
    for(i=0;i<10;i++){

        printf("Vetor[%d] = ",i);
        scanf("%d",&vetor1[i]);
    }

    //Preechendo o vetor2
    printf("\nVetor 2:\n");
    for(i=0;i<10;i++){

        printf("Vetor[%d] = ",i);
        scanf("%d",&vetor2[i]);
    }

	// Solicita que o usuário que entre com algum dado qualquer

    //Encontrando o maior valor do vetor1

    for(i=0;i<10;i++){

        maior1 = vetor1[0];

        if(vetor1[i]>maior1){

            maior1 = vetor1[i];
        }
    }

    //Encontrando o maior valor do vetor2

    for(i=0;i<10;i++){

        maior2 = vetor2[0];

        if(vetor2[i]>maior1){

            maior2 = vetor2[i];
        }
    }


	/* Fim */ 

	/* Saida de dados */

    if(maior1>maior2){

        vetor3[0] = maior2;
        vetor3[1] = maior1;

        printf("\nVetor3[0] = %d",maior2);
        printf("\nVetor3[1] = %d",maior1);

    }else{

        if(maior1<maior2){

            vetor3[0] = maior1;
            vetor3[1] = maior2;

            printf("\nVetor3[0] = %d",maior1);
            printf("\nVetor3[1] = %d",maior2);

        }else{

            vetor3[0] = maior2;
            vetor3[1] = maior1;

            printf("\nVetor3[0] = %d",maior2);
            printf("\nVetor3[1] = %d",maior1);   
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
