#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro.

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //
    int b,h,area,perimetro;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor da base:");
    scanf("%d",&b);
    printf("Digite o valor da altura:");
    scanf("%d",&h);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    area = b*h; //Fórmula da área do retângulo
    perimetro = 2*(b+h); //Fórmula do perímetro

	/* Saida de dados */
    printf("A área do retângulo é %d", area);
    printf("\nO perímetro é %d", perimetro);
	
	// Exibe mensagem na tela

	/* Fim */ 

	
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 



   } // Fim 

