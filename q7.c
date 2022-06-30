#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int dias,anos,meses;
	
	/* Fim */

	/* Entrada de dados */
	
    printf("Digite a idade da pessoa em dias:");
    scanf("%d",&dias);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    anos = dias/365; //Determinando a quantidade de anos
    meses = dias/30; //Determinando a quantidade de meses

	/* Saida de dados */

    printf("%d anos = %d meses = %d dias", anos, meses, dias);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
