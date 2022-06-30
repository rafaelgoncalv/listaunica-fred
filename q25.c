#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
dias deste mês.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int mes;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o número correspondente ao mês:");
    scanf("%d",&mes);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    switch (mes){

        case 1:
        printf("O més de janeiro tem 31 dias");
        break; //Quando encontrar a alternativa que queremos buscar não tentar testar o restante

        case 2:
        printf("O més de fevereiro tem 28 dias (ou 29 dias em anos bissexto)");
        break;

        case 3:
        printf("O més de março tem 31 dias");
        break;

        case 4:
        printf("O més de abril tem 30 dias");
        break;

        case 5:
        printf("O més de maio tem 31 dias");
        break;

        case 6:
        printf("O més de junho tem 30 dias");
        break;

        case 7:
        printf("O més de julho tem 31 dias");
        break;

        case 8:
        printf("O mês de agosto tem 31 dias");
        break;

        case 9:
        printf("O més de setembro tem 30 dias");
        break;
    
        case 10:
        printf("O més de outubro tem 31 dias");
        break;

        case 11:
        printf("O més de novembro tem 30 dias");
        break;

        case 12:
        printf("O més de dezembro tem 31 dias");
        break;

        default:
        printf("O valor é inválido!!!");
        break;

    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
