#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro.
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int dia;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o dia da semana desejado(1 a 7):");
    scanf("%d",&dia);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    switch (dia)
    {
    case 1: printf("Domingo");
    break;

    case 2: printf("Segunda-feira");
    break;

    case 3: printf("Terça-feira");
    break;

    case 4: printf("Quarta-feira");
    break;

    case 5: printf("Quinta-feira");
    break;

    case 6: printf("Sexta-feira");
    break;

    case 7: printf("Sábado");
    break;
    
    default: printf("O dia digitado é inválido!!!");
    break;

    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
