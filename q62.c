#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um programa em C que leia um array de 10 posições e conte quantos números pares 
são elementos do array. Imprima esta quantidade.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int vetor[10];
    int i,qtdp;
    //Inicializando a variável
    i = 0;
    qtdp = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");

    while(i<=9){

        printf("Digite o %dº valor:",i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i]%2 ==0){

            qtdp = qtdp + 1;
        }

        i++;
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
    
    printf("\nO total de pares = %d",qtdp);
	
	// Exibe mensagem na tela

	/* Fim */ 
     
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 