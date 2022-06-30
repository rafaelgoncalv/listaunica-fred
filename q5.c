#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <conio.h> //Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Ler um número inteiro e exibir o seu sucessor
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int n,sucessor;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor inteiro:");
    scanf("%d",&n);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    sucessor = n + 1;

	/* Saida de dados */

    printf("O sucessor de %d é %d",n,sucessor);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
