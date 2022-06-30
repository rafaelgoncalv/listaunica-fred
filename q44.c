#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma
de todos eles. 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int contador,soma;
    soma = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */

    for(contador = 1; contador<=100; contador++){

        printf("\n%d",contador);

        soma = soma + contador;
    }

    printf("\nA soma de todos os valores de 1 até 100 é %d",soma);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
