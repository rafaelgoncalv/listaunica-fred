#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
numero por extenso.

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //
    int num,c,d,u;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um número de 1 a 100:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    c= num/100;
    d=num/10;
    u=num%10;


	/* Saida de dados */

    if(num>=1 && num<=19){

        switch (num)
        {
        case 1: printf("Um");
        break;

        case 2: printf("Dois");
        break;

        case 3: printf("Três");
        break;

        case 4: printf("Quatro");
        break;

        case 5: printf("Cinco");
        break;

        case 6: printf("Seis");
        break;

        case 7: printf("Sete");
        break;

        case 8: printf("Oito");
        break;

        case 9: printf("Nove");
        break;

        case 10: printf("Dez");
        break;

        case 11: printf("Onze");
        break;

        case 12: printf("Doze");
        break;

        case 13: printf("Treze");
        break;

        case 14: printf("cartoze ou quatorze");
        break;

        case 15: printf("Quinze");
        break;

        case 16: printf("Dezesseis");
        break;

        case 17: printf("Dezessete");
        break;

        case 18: printf("Dezoito");
        break;

        case 19: printf("Dezenove");
        break;

        }
    }

    switch (c)
    {
    case 1: printf("Cem");
    }

    switch (d)
    {
    case 2: printf("Vinte");
    break;

    case 3: printf("Trinta");
    break;

    case 4: printf("Quarenta");
    break;

    case 5: printf("Cinquenta");
    break;

    case 6: printf("Sessenta");
    break;

    case 7: printf("Setenta");
    break;

    case 8: printf("Oitenta");
    break;

    case 9: printf("Noventa");
    }


    switch (u)
    {
        case 1: printf(" e um");
        break;

        case 2: printf(" e dois");
        break;

        case 3: printf(" e três");
        break;

        case 4: printf(" e quatro");
        break;

        case 5: printf(" e cinco");
        break;

        case 6: printf(" e seis");
        break;

        case 7: printf(" e sete");
        break;

        case 8: printf(" e oito");
        break;

        case 9: printf(" e nove");
        break;

    }
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
