#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
 
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor inteiro qualquer:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(num>0){

        printf("%d é positivo",num);
    }else{
        if(num<0){

            printf("%d é negativo",num);
        }else{

            printf("%d é neutro",num);
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
