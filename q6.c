#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <conio.h> //Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int n1,n2,resto;
    float quociente;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor de n1:");
    scanf("%d",&n1);
    printf("Digite o valor de n2:");
    scanf("%d",&n2);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    quociente = (float)n1/n2;
    resto = n1%n2;

	/* Saida de dados */
    printf("O quociente entre n1 e n2 é %.2f", quociente);
    printf("\nO resto da divisão é %d", resto);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
