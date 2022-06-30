#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
valor de temperatura em Fahrenheit e exibi-lo em Celsius
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float fh,celsius;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor da temperatura em fahrenheit:");
    scanf("%f",&fh);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    celsius = 0.55555555555*(fh - 32);

	/* Saida de dados */

    printf("A temperatura %f fahrenheit em celsius é %.2f",fh,celsius);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
