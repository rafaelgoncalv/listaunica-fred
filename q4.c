#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Dado os três lados de um triângulo determinar o perímetro do mesmo.
 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int ladoa,ladob,ladoc,perimetro;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor do ladoa:");
    scanf("%d",&ladoa);
    printf("Digite o valor do ladob:");
    scanf("%d",&ladob);
    printf("Digite o valor do ladoc:");
    scanf("%d",&ladoc);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    perimetro = ladoa+ladob+ladoc; 

	/* Saida de dados */
    printf("O perimetro é %d", perimetro);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
