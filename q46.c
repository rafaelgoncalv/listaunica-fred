#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado. 
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int a,b,quociente, resto;
    //Inicializando a variável
    quociente = 0;

	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);

	// Solicita que o usuário que entre com algum dado qualquer

    //Cálculos matemáticos

    resto = a % b;

    while (a>resto)
    {
        a = a - b;
        printf("\n%d",a);
        quociente = quociente + 1;
    }
    

	/* Saida de dados */

    printf("\nO quociente da de a/b é igual %d",quociente);
    printf("\nO resto é igual %d",a);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
