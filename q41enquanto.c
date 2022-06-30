#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a
100. Usando for.

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int contador;
	//Inicializando variável
    contador=1;

	/* Fim */ 

	/* Saida de dados */

    while(contador<=100){

        printf("\n%d",contador);

        contador = contador + 1;
    }

	printf("\n");
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
