#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem
decrescente).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int contador;
	//Inicializando variável
    contador = 100;

	/* Fim */ 

	/* Saida de dados */

    while(contador>0){

        printf("\n%d",contador);

        contador = contador - 1;
    }

	/* Outra forma de resolver:
	
	do{

        printf("\n%d",contador);

        contador = contador - 1;

	}while(contador>0);*/

	/*Outra forma de resolver:
	Não esqueça de tirar o contador = 100; do início do programa já que ele vai ser inicializado no for

	for(contador=100;contador>0;contador--){

		printf("\n%d",contador);
	}

	*/
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
