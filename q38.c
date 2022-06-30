#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for
divisível por 400, ele volta a ser bissexto.

a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ...

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o ano:");
    scanf("%d",&ano);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){

        printf("O ano %d é bissexto",ano);
    }else{

        printf("O ano %d não é bissexto",ano);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
