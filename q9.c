#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
seu raio e sua altura.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float raio,h,volume;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor do raio:");
    scanf("%f",&raio);
    printf("Digite o valor da altura:");
    scanf("%f",&h);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    volume = 3.14*raio*raio*h;

	/* Saida de dados */

    printf("O volume do cilindro é %.2f",volume);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
