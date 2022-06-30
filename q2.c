#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.
 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //
    int l,area,perimetro;
	
	/* Fim */

	/* Entrada de dados */
    printf("Digite o valor do lado:");
    scanf("%d",&l);
	
	setlocale(LC_ALL,"");

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    area = l*l; //Fórmula da área de um quadrado
    perimetro = 4*l; //Fórmula do perímetro

	/* Saida de dados */
    printf("A área do quadrado é %d", area);
    printf("\nO valor do perímetro é %d", perimetro);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
