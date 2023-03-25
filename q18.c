#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que permute o valor de duas variáveis inteiras.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int n1, n2, aux;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor inteiro n1:");
    scanf("%d",&n1);
    printf("Digite um valor inteiro n2:");
    scanf("%d",&n2);

	// Solicita que o usuário que entre com algum dado qualquer

    printf("\nAntes da permutação:");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    aux = n1;//Guardando a cópia do valor de n1
    n1 = n2;
    n2 = aux;

	/* Fim */ 

	/* Saida de dados */

    printf("\nApós a permutação ficará da seguinte forma:");
    printf("\nn1 = %d e n2 = %d", n1, n2);

	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa assim como o comando "getchar();". Apenas no Windows.
	return 0; 


} // Fim
